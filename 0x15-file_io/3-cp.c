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
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
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
	dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", prog_name);
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
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
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
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", descriptor);
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
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
		usage_error(argv[0]);
	if (argv[1] == NULL)
		read_error(argv[1]);
	if (argv[2] == NULL)
		write_error(argv[2]);
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		read_error(argv[1]);
	fd_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, mode);
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
