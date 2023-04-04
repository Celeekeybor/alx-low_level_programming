#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at a given index
 * @head: pointer to a linked list
 * @idx: integer, position to insert new node
 * @n: integer, n  allocate new node
 *
 * Return: pointer to new node or NULL when failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = NULL, *previous = NULL, *h = *head;

	for ( ; h != NULL && idx > 0; h = h->next, idx--)
		previous = h;
	if (idx == 0)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		if (previous == NULL)
		{
			new->next = *head, *head = new;
		}
		else
		{
			if (previous->next)
				new->next = h, previous->next = new;
			else
				new->next = NULL, previous->next = new;
		}
	}
	return (new);
}
