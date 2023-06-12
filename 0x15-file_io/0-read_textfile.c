#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bf;
	ssize_t k;
	ssize_t m;
	ssize_t h;

	k = open(filename, O_RDONLY);
	if (k == -1)
		return (0);
	bf = malloc(sizeof(char) * letters);
	h = read(k, bf, letters);
	m = write(STDOUT_FILENO, bf, h);

	free(bf);
	close(k);
	return(m);
}

