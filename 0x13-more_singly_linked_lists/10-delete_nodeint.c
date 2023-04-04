#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at a given position
 * @head: pointer to a pointer to a linked list
 * @index: integer, node position
 *
 * Return: 1 if success, else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *h = *head, *previous = NULL;
	int status = -1;

	for ( ; h != NULL; h = h->next, index--)
	{
		if (index == 0)
		{
			if (previous)
				previous->next = h->next;
			else
				*head = h->next;
			free(h), status = 1;
			break;
		}
		previous = h;
	}
	return (status);
}
