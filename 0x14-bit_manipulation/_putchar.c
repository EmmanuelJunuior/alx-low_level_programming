#include "main.h"
#include <unistd.h>

/**
 * _putcha - writes the character to standout
 * @c: the character to print
 * Return: 1 if success, else -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
