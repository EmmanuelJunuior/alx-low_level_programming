#include "main.h"

/**
 * set_bit -  sets the value of a bit to 1 at a given index
 * @n: bit to set
 * @index: index of bit to set
 * Return: 1 if success, else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int sb;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	sb = 1 << index;
	*n = *n | sb;
	return (1);
}
