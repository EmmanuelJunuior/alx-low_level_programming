#include "main.h"

/**
 * malloc_checked - allocates memory using
 * @b: number of bytes to allocate
 *
 * Return: pointer of alloted memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
