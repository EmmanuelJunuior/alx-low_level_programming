#include "main.h"

int actual_prime_number(int n, int i);

/**
 * is_prime_number - determines if an input in a prime number or not
 * @n: input to evaluate
 *
 * Return: 1 if input prime, 0 if not prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (actual_prime_number(n, n - 1));
}

/**
 * actual_prime_number - calculate if number is prime recursively
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not prime
 */
int actual_prime_number(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (actual_prime_number(n, i - 1));
}
