#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print numbers base 10 with putchar'
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
