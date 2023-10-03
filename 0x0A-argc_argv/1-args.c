#include "main.h"

/**
 * _main: prints the number of arguments passed into it.
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */
int _main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
