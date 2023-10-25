#include "lists.h"

/**
 * get_nodeint_at_index - return specified node from list
 * @head: first node in list
 * @index: index of specified node to retunr
 * Return: pointer to specified node, NULL (fail)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *tmp = head;

	while (tmp && x < index)
	{
		tmp = tmp->next;
		x++;
	}

	return (tmp ? tmp : NULL);
}
