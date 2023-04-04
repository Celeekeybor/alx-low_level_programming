#include "lists.h"

/**
 * free_listint2 - free memory held by a linked list
 * @head: pointer to a pointer to the head of a linked list
 *
 * Description: free list and set head to NULL
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	listint_t *i;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		i = *head;
		*head = (*head)->next;
		free(i);
	}
}
