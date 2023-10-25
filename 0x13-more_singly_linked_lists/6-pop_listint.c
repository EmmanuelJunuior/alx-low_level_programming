#include "lists.h"

/**
 *  pop_listint - delets first entry in list
 *  @head: pointer to first node in list
 *  Return: data inside element deleted, else 0 (fail)
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int p;

	if (!head || !*head)
		return (0);

	p = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (p);
}
