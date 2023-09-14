#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void usageError(const char *argv0)
{
	dprintf(2, "Usage: %s file_from file_to\n", argv0);
	exit (97);
}

void readError(const char *filename)
{
	dprintf(2, "Error: Can't read from file %s\n", filename);
	exit (98);
}

void writeError(const char *filename)
{
	dprintf(2, "Error: Can't write to %s\n", filename);
	exit (99);
}

void closeError(int fd)
{
	dprintf(2, "Error, Can't close fd %d\n", fd);
	exit(100);
}

/**
 * main - program that copies the content of a file to another file
 *
 * @argc: argument count
 * @argv: Argument vectors
 *
 * Return: On success return 0,
 * else return 1..
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to;
	char *buffer;
	ssize_t bytes_read, bytes_written, new_bytes_read, new_bytes_written;

	bytes_read = bytes_written = 0;

	if (argc != 3)
		usageError(argv[0]);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		readError(argv[1]);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		writeError(argv[2]);

	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit (99);
	}

	while (1)
	{
		buffer = malloc(sizeof(char) * 1024);
		if (buffer == NULL)
			return (1);

		new_bytes_read = read(fd_from, buffer, 1024);
		if (new_bytes_read == -1)
			readError(argv[1]);

		if (new_bytes_read == 0)
		{
			free(buffer);
			break;
		}

		new_bytes_written = write(fd_to, buffer, new_bytes_read);
		if (new_bytes_written == -1)
			writeError(argv[2]);

		bytes_read += new_bytes_read;
		bytes_written += new_bytes_written;
		
		free(buffer);
	}

	if (close (fd_from) == -1)
		closeError(fd_from);

	if (close (fd_to) == -1)
		closeError(fd_to);

	return (0);
}
