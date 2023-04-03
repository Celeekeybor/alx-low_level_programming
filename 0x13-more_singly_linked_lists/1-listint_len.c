#include "lists.h"

/**
 * listint_len - Find the number of elements in a linked list
 * @h: pointer to a singly linked list
 *
 * Return: no. of elements, size_t
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	for ( ; h != NULL; h = h->next)
		n++;
	return (n);
}
