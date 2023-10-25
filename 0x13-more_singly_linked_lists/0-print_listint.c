#include "lists.h"

/**
 * print_listint - prints all elements of linked list
 * @h: linked list of type listint_t for printing
 * Return: number of nodes in list
 */
size_t print_listint(const listint_t *h)
{
	size_t nom = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nom++;
		h = h->next;
	}

	return (nom);
}
