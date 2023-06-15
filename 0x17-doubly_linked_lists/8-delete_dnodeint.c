#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes nth node of a doubly linked list
 * @head: pointer to head node
 * @index: node index to be found
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count;
	dlistint_t *tmp;

	if (*head == NULL || head == NULL)
	return (-1);
	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(tmp), tmp = NULL;
		return (1);
	}
	count = 1, tmp = (*head)->next;
	if (tmp)
	{
		while (tmp->next)
		{
			if (index == count)
			{
				tmp->prev->next = tmp->next;
				tmp->next->prev = tmp->prev;
				free(tmp), tmp = NULL;
				return (1);
			}
			count++, tmp = tmp->next;
		}
	}
	if (tmp && index == count)
	{
		tmp->prev->next = NULL;
		free(tmp);
		return (1);
	}
	return (-1);
}

