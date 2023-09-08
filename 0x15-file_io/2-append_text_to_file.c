#include "main.h"

/**
 * append_text_to_file - Appends text at end of a file.
 * @filename: pointer to name of the file.
 * @text_content: string to add to the end of the file.
 *
 * Return: If function fails or filename is NULL - -1.
 *         If file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wrt, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wrt = write(op, text_content, len);

	if (op == -1 || wrt == -1)
		return (-1);

	close(op);

	return (1);
}

