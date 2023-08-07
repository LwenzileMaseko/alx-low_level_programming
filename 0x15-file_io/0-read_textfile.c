#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file 
 * and prints it to the POSIX standard output.
 * @filename: text file that is read
 * @letters: number of letters to be read
 * Return: w- number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t wrt;
	ssize_t r;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	r = read(fd, buf, letters);
	wrt = write(STDOUT_FILENO, buf, r);

	free(buf);
	close(fd);
	return (wrt);
}

