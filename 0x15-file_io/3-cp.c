#include "main.h"

/**
 * read_error - prints error message for read fail and exits
 *
 * @file: first argument passed to the program
 *
 * Return: void
 */
void read_error(char *file)
{
	dprintf(2, "Error: Can't read from file %s\n", file);
	exit(98);
}

/**
 * usage_error - prints error message for wrong number of args at run
 *
 * @prog_name: program name as compiled
 *
 * Return: void
 */
void usage_error(char *prog_name)
{
	dprintf(2, "Usage: %s file_from file_to\n", prog_name);
	exit(97);
}

/**
 * write_error - prints error message for write fail and exits
 *
 * @file: second argument passed to the program
 *
 * Return: void
 */
void write_error(char *file)
{
	dprintf(2, "Error: Can't write to %s\n", file);
	exit(99);
}

/**
 * close_error - prints error message for close fail
 *
 * @descriptor: value of the file descriptor unable to be closed
 *
 * Return: void
 */
void close_error(int descriptor)
{
	dprintf(2, "Error: Can't close fd %d\n", descriptor);
	exit(100);
}

/**
 * main - entry point of program that copies content of a file to another file
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (on success) -1 (on failure)
 */
int main(int argc, char *argv[])
{
	char *buffer;
	int fd_from, fd_to, buf_size = 1024;
	ssize_t bytes_written, bytes_read;

	if (argc != 3)
		usage_error(argv[0]);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		read_error(argv[1]);

	fd_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd_to == -1)
		write_error(argv[2]);

	buffer = malloc(sizeof(char) * buf_size);
	if (buffer == NULL)
		return (-1);

	while ((bytes_read = read(fd_from, buffer, buf_size)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
			write_error(argv[2]);
	}
	if (bytes_read == -1)
		read_error(argv[1]);

	free(buffer);

	if (close(fd_from) == -1)
		close_error(fd_from);
	if (close(fd_to) == -1)
		close_error(fd_to);

	return (0);
}
