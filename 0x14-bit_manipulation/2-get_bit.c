#include "main.h"

/**
 * get_bit - print value of index
 * @n: bit to convert to value
 * @index: index of bit
 * Return: value of bit, else -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int div, cek;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	div = 1 << index;
	cek = n & div;
	if (cek == div)
		return (1);
	return (0);
}
