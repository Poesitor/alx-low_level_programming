#include "main.h"

/**
 * usage_error - output for the case of usage error
 *
 * @name: program name - as compiled
 *
 * Return: void
 */
void usage_error(char *name)
{
	dprintf(2, "Usage: %s file_from file_to\n", name);
	exit(97);
}

/**
 * read_error - output for the case of read error
 *
 * @org_file: file the program intends to copy from
 *
 * Return: void
 */
void read_error(char *org_file)
{
	dprintf(2, "Error: Can't read from file %s\n", org_file);
	exit(98);
}

/**
 * write_error - output for the case of write or create error
 *
 * @dest_file: file the program intends to copy to
 *
 * Return: void
 */
void write_error(char *dest_file)
{
	dprintf(2, "Error: Can't write to %s\n", dest_file);
	exit(99);
}

/**
 * main - copies the content of a file to another file
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0(success), -1(failure)
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	char *buffer;
	ssize_t bytes_written, bytes_read;
	const int size = 1024;

	if (argc != 3)
		usage_error(argv[0]);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		read_error(argv[1]);

	fd_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd_to == -1)
	{
		if (close(fd_from) == -1)
		{
			dprintf(2, "Error: Can't close fd %s\n", argv[2]);
			exit(100);
		}
		write_error(argv[2]);
	}

	buffer = malloc(sizeof(char) * size);
	if (buffer == NULL)
		return (-1);

	bytes_read = read(fd_from, buffer, size);
	if (bytes_read == -1)
		read_error(argv[1]);
	printf("Bytes read: %ld\n", bytes_read);
	while (bytes_read > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
			write_error(argv[2]);
		bytes_read = read(fd_from, buffer, size);
	}

	if (close(fd_to) == -1 || close(fd_from) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	free(buffer);
	return (1);
}
