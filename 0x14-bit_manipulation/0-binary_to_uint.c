#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to a string containing a binary number
 * Return: unsigned int with decimal of binary, else 0
 */
unsigned int binary_to_uint(const char *b)
{
	int f;
	unsigned int n;

	n = 0;

	if (!b)
		return (0);
	for (f = 0; b[f] != '\0'; f++)
	{
		if (b[f] != '0' && b[f] != '1')
			return (0);
	}
	for (f = 0; b[f] != '\0'; f++)
	{
		n <<= 1;
		if (b[f] == '1')
			n += 1;
	}
	return (n);
}
