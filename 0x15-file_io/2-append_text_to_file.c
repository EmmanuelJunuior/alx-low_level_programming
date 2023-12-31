#include "main.h"
#include <stdlib.h>

/**
 * append_text_to_file -  function that appends text at the end of a file
 * @filename: file where to append text
 * @text_content: text to add to the filename file
 * Return: 1 if success, and -1 if fail
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
