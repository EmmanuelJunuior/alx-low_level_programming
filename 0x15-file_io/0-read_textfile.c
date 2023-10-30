#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: file to be printed
 * @letters: number of letters to be printed
 * Return: number of letters (success), else fail 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bon;
	ssize_t a;
	ssize_t b;
	ssize_t c;

	a = open(filename, O_RDONLY);
	if (a == -1)
		return (0);
	bon = malloc(sizeof(char) * letters);
	c = read(a, bon, letters);
	b = write(STDOUT_FILENO, bon, c);

	free(bon);
	close(a);
	return (b);
}
