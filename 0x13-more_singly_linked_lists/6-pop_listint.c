#include "lists.h"

/**
 * pop_listint - delete the head node of a linked list
 * @head: pointer to a pointer of a linked list
 *
 * Return: integer, n data value of deleted node
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *h = *head;

	if (h != NULL)
	{
		n = h->n;
		*head = h->next;
		free(h);
	}
	return (n);
}
