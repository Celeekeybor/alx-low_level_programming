#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes  node of a doubly linked list
 * @head: head node
 * @index: index to be found
 *
 * Return: yes or no
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int sum;
	dlistint_t *bor;

	if (*head == NULL || head == NULL)
	return (-1);
	if (index == 0)
	{
		bor = *head;
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(bor), bor = NULL;
		return (1);
	}
	sum = 1, bor = (*head)->next;
	if (bor)
	{
		while (bor->next)
		{
			if (index == sum)
			{
				bor->prev->next = bor->next;
				bor->next->prev = bor->prev;
				free(bor), bor = NULL;
				return (1);
			}
			sum++, bor = bor->next;
		}
	}
	if (bor && index == sum)
	{
		bor->prev->next = NULL;
		free(bor);
		return (1);
	}
	return (-1);
}

