#include "main.h"

/**
 * _pow - function calculates base 10^power
 * @base: base of function
 * @power: power of exponent
 * Return: value of (base^power)
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int n;
	unsigned int i;

	n = 1;
	for (i = 1; i <= power; i++)
		n *= base;
	return (n);
}

/**
 * print_binary -  prints the binary representation of a number
 * @n: number to print
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int div, check;
	char f;

	f = 0;
	div = _pow(2, sizeof(unsigned long int) * 8  - 1);
	while (div != 0)
	{
		check = n & div;
		if (check == div)
		{
			f = 1;
			_putchar('1');
		}
		else if (f == 1 || div == 1)
		{
			_putchar('0');
		}
		div >>= 1;
	}
}
