#include "lists.h"

/**
 * get_dnodeint_at_index - finds  node of a doubly linked list
 * @head: head node
 * @index: node index
 *
 * Return: new element
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
