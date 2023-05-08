#include "main.h"
#include <stdlib.h>
#include <stdio.h>

void close_file(int fd);
char *create_buffer(char *file);

/**
 * create_buffer -to allocates 1024 bytes for a buffer.
 * @file: name of the file buffer is storing chars for.
 *
 * Return: the pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}
/**
 * main - the Copies the contents of a file to another file.
 * @argc: number of arguments supplied to the program.
 * @argv: An array of the pointers to the arguments.
 *
 * Return:the value 0 on success.
 *
 * Description: If the arg count is incorrect - exit code 97.
 * If file_from does not exist or that cannot be read - exit code 98.
 * If file_to cannot be created or on written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, k, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	k = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || k == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		k = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (k > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
/**
 * close_file -to Closes file descriptors.
 * @fd: file descriptor to be closed.
 */
void close_file(int fd)
{
	int d;

	d = close(fd);

	if (d == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
