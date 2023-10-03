#include "main.h"
/**
 * _isdigit - checks if numbers
 * @c: char to check
 *
 * Return: 1 if char is digit and 0 is not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
