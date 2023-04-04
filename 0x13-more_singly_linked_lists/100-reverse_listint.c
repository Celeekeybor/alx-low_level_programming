#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: pointer to a linked list
 *
 * Return: head node of the reversed linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *h, *i;

	if (*head == NULL)
		return (NULL);
	h = *head;
	*head = (*head)->next, h->next = NULL;
	while (*head != NULL)
	{
		i = *head;
		*head = (*head)->next;
		i->next = h, h = i;
	}
	*head = h;
	return (*head);
}
