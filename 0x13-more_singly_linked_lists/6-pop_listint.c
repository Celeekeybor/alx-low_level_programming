#include "lists.h"

/**
 * pop_listint - delete the head node of a linked list
 * @head: pointer to a pointer of a linked list
 *
 * Return: integer, n data of the deleted node
 */
int pop_listint(listint_t **head)
{
	int k = 0;
	listint_t *h = *head;

	if (h != NULL)
	{
		k  = h->k;
		*head = h->next;
		free(h);
	}
	return (k);
}
