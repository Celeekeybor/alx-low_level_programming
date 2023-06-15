#include "lists.h"

/**
 * sum_dlistint - addition of all data of a doubly linked list
 * @head: head node
 *
 * Return: the addition
 */
int sum_dlistint(dlistint_t *head)
{
	size_t addition = 0;

	while (head != NULL)
	{
		addition += head->n;
		head = head->next;
	}
	return (addition);
}
