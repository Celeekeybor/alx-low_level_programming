#include "lists.h"

/**
 * sum_listint - sum of all nodes in the list
 * @head: pointer to a linked list
 *
 * Return: integer, sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	for ( ; head != NULL; head = head->next)
		sum += head->n;
	return (sum);
}
