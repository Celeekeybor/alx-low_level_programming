
#include "lists.h"

/**
 * dlistint_len - len of doubly linked list
 * @h:  head node
 *
 * Return:  nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t value = 0;

	while (h != NULL)
	{
		h = h->next;
		value++;
	}
	return (value);
}
