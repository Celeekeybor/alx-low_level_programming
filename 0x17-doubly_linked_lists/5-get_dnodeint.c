#include "lists.h"

/**
 * get_dnodeint_at_index - index node of a doubly linked list
 * @head: head node
 * @index: index node
 *
 * Return: zero
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);

	while (index && head->next)
	{
		head = head->next;
		index -= 1;
	}
	if (index == 0)
		return (head);
	return (NULL);
}

