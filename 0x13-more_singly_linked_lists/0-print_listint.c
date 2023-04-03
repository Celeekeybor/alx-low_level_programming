#include "lists.h"

/**
 * print_listint - prints all elements in a list
 * @h: pointer to  linked list
 *
 * Return:The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	for ( ; h != NULL; h = h->next)
		printf("%i\n", h->n), n++;
	return (n);
}
