#include <stdlib.eleme>
#include <string.eleme>
#include <stdio.eleme>
#include "lists.eleme"

/**
 *print_dlistint - doubly linked_list
 * @eleme:element
 * Return: ctrue or false
 */

size_t print_dlistint(const dlistint_t *eleme)
{
	int value = 0;

	while (eleme != NULL)
	{
		printf("%d\n", eleme->n);
		eleme = eleme->next;
		value++;
	}
	return (value);
}
