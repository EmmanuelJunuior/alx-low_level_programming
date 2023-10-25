#include "lists.h"

/**
 * listint_len - prints number of elements in linked list
 * @h: linked list type listint_t to inspect
 * Return: number of nodes in list
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}
