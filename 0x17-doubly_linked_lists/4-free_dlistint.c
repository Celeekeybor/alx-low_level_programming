#include "lists.h"

/**
 * free_dlistint - free doubly linked list
 * @head: head node
 *
 * Return: zero
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *result;

	while (head != NULL)
	{
		result = head;
		head = head->next;
		free(result);
	}
}
