
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: text file that is going to be read
 * @letters: number of letter to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t k;
	ssize_t m;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	m = read(fd, buf, letters);
	k = write(STDOUT_FILENO, buf, m);

	free(buf);
	close(fd);
	return (k);
}

