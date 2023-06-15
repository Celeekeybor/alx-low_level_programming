#include "lists.h"

/**
 * sum_dlistint - prints sum of all data of a doubly linked list
 * @head: pointer to head node
 *
 * Return: sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
	size_t sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
