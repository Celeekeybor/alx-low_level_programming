#include "lists.h"

/**
 * get_nodeint_at_index - get a node at a given position
 * @head: pointer to a linked list
 * @index: positive integer, position of desired node
 *
 * Return: node at index, or NULL if none found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	for ( ; head != NULL && index > 0; head = head->next, --index)
		;
	return (head);
}
