#include "lists.h"

/**
 * add_node_end - add a new node down the list
 * @head: double pointer, pointer to a pointer of the previous node
 * @str: string to be duplicated and assigned to the new struct
 *
 * Return: pointer to the head node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *h = *head;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new != NULL)
	{
		new->str = strdup(str);
		new->len = new->str ? _strlen(new->str) : 0;
		new->next = NULL;
	}
	if (h == NULL)
	{
		if (new == NULL)
			return (NULL);
		*head = new;
	}
	else
	{
		for ( ; h != NULL; h = h->next)
		{
			if (h->next == NULL)
			{
				if (new == NULL)
					return (NULL);
				h->next = new;
				break;
			}
		}
	}
	return (new);
}

/**
 * _strlen - length of a string
 * @s: pointer to an array of chars, string
 *
 * Return: integer, length of string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
