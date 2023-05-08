#include <stdlib.h>
#include "main.h"

/**
 * read_textfile- Reads the text file print to STDOUT.
 * @filename:the text file being read
 * @letters:the number of letters to be read
 * Return: u- actual number of bytes read and printed
 *        0 when function it fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t u;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	u = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (u);
}
