#include "lists.h"

/**
 * add_nodeint_end - add new node to end of list
 * @head: pointer to start of the list
 * @n: information to add to new node
 * Return: pointer to new node, else NULL (fail)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_l;
	listint_t *tmp = *head;

	new_l = malloc(sizeof(listint_t));
	if (!new_l)
		return (NULL);

	new_l->n = n;
	new_l->next = NULL;

	if (*head == NULL)
	{
		*head = new_l;
		return (new_l);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = new_l;

	return (new_l);
}
