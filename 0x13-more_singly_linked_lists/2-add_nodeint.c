#include "lists.h"

/**
 * add_nodeint - adding a node on top of the linked list
 * @head: pointer to linked list
 * @n: integer, value of the n data of the new struct list
 *
 * Return: pointer to the new head of the list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if(*head == NULL)
		new->next = NULL, *head = new;
	else
		new->next = *head, *head = new;
	return (*head);
}
