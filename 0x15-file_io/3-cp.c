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
 * read_into_buffer - function to read from file descriptor into buffer
 *
 * @fd: the file descriptor to read from
 * @buf: The buffer to read to
 * @total: a pointer to the total number of bytes read
 * from fd_from.
 * @size: The initial size of the buffer
 * @from: name of file to copy from
 *
 * Return: void
 */
void read_into_buffer(int fd, char *buf, int size, char *from, int *total)
{
	char *temp;
	ssize_t bytes_read = read(fd, buf, size);

	if (bytes_read == -1)
		read_error(from);

	if (bytes_read < size)
	{
		while (bytes_read != 0)
		{
			temp = realloc(buf, (*total + size));
			if (temp == NULL)
			{
				free(buf);
				exit(101);
			}
			buf = temp;

			*total += bytes_read;

			bytes_read = read(fd, buf, size);
			if (bytes_read == -1)
				read_error(from);
		}
	}
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
	int fd_from, fd_to, total_bytes = 0;
	int *total_bytes_read;
	char *buffer;
	ssize_t bytes_written;
	const int size = 1024;

	if (argc != 3)
		usage_error(argv[0]);

	total_bytes_read = &total_bytes;

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

	read_into_buffer(fd_from, buffer, size, argv[1], total_bytes_read);

	bytes_written = write(fd_to, buffer, *total_bytes_read);
	if (bytes_written == -1)
		write_error(argv[2]);

	if (close(fd_to) == -1 || close(fd_from) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	free(buffer);
	return (1);
}
