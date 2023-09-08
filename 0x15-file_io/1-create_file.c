#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: pointer to name of file to create.
 * @text_content: pointer to string to write to file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, y, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	y = write(fd, text_content, len);

	if (fd == -1 || y == -1)
		return (-1);

	close(fd);

	return (1);
}

