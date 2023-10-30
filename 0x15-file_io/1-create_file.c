#include "main.h"
#include <stdlib.h>

/**
 * create_file - function that creates a file
 * @filename: pointer to name of the file to create
 * @text_content: pointer of string of content to add to file
 * Return: 1 if success and -1 if fails
 */
int create_file(const char *filename, char *text_content)
{
	int a, b, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	a = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	b = write(a, text_content, len);

	if (a == -1 || b == -1)
		return (-1);

	close(a);

	return (1);
}
