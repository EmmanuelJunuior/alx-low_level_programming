#include "lists.h"

/**
 * sum_listint - print sum of data on list
 * @head: pointer to first node in list
 * Return: Sum of list, else 0 (empty list)
 */
int sum_listint(listint_t *head)
{
	int y = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		y += tmp->n;
		tmp = tmp->next;
	}

	return (y);
}
