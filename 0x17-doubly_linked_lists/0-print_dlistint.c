#include "lists.h"

/**
 * print_dlistint - show a doubly linked list
 * @h: point to node next
 *
 * Return: nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
