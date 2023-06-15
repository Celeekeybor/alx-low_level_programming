#include "lists.h"

/**
 * dlistint_len - prints number of elements of a doubly linked list
 * @h: pointer to head node
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}
