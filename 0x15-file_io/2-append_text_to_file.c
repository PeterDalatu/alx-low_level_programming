#include "main.h"

/**
 * append_text_to_file - the appends text at the end of the file.
 * @filename: the pointer to the name of the file.
 * @text_content: A string to add to the end of the file.
 *
 * Return: If function fails or filename is NULL - -1.
 *         If file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	w = write(a, text_content, len);

	if (a == -1 || w == -1)
		return (-1);

	close(a);

	return (1);
}
