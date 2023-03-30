#include "lists.h"

/**
 * free_list - free memory held by list
 * @head: pointer to the head node
 *
 * Return: None
 */
void free_list(list_t *head)
{
	list_t *i;

	if (head != NULL)
	{
		for ( ; head != NULL; head = i)
		{
			free(head->str);
			i = head->next;
			free(head);
		}
		free(i);
	}
	free(head);
}

