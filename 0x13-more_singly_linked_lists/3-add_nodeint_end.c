#include "lists.h"

/**
 * add_nodeint_end - add a new node to the tail of the linked list
 * @head: pointer to a pointer of a linked list
 * @n: integer, value of n element in the new node
 *
 * Return: pointer to the new node, listint_t *new
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *h = *head;

	new = malloc(sizeof(*new));

	if (new == NULL)
		return (NULL);
	new->n = n, new->next = NULL;
	if (h == NULL)
	{
		*head = new;
		return (new);
	}
	for ( ; h != NULL; h = h->next)
	{
		if (h->next == NULL)
		{
			h->next = new;
			break;
		}
	}
	return (new);
}
