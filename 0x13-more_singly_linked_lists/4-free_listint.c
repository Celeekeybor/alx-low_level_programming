#include "lists.h"

/**
 * free_listint - free held memory
 * @head: pointer to the head of a linked list
 *
 * Return: 0
 */
void free_listint(listint_t *head)
{
	listint_t *i, *h = head;

	for ( ; h != NULL; h = i)
		i = h->next, free(h);
	free(i);
}
