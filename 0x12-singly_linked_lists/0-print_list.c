#include "lists.h"

/**
 * print_list - print data in a linked list
 * @h: pointer to a linked list
 *
 * Return: size_t, number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	for ( ; h != NULL; h = h->next)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->len, h->str);
		node_count += 1;
	}
	return (node_count);
}
