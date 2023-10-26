#include "main.h"

/**
 * flip_bits - number of bits to flip to get from one number to another
 * @n: first bit
 * @m: second bit
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, bit = 0;
	unsigned long int curr;
	unsigned long int exc = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		curr = exc >> i;
		if (curr & 1)
			bit++;
	}
	return (bit);
}
