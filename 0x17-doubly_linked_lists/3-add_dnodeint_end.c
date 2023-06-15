#include "lists.h"

/**
 * add_dnodeint_end - adds a current node end of the doubly linked list
 * @head: head node
 * @n: node added
 *
 * Return: new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current, *celee;

	if (head == NULL)
		return (NULL);

	current = malloc(sizeof(dlistint_t));

	if (current == NULL)
		return (NULL);

	current->n = n;
	current->next = NULL;

	if (*head == NULL)
	{
		*head = current;
		current->prev = NULL;
	}
	else
	{
		celee = *head;
		while (celee->next != NULL)
			celee = celee->next;
		celee->next = current;
		current->prev = celee;
	}
	return (current);
}
