#include "lists.h"

/**
 * add_node - add a new node up the list
 * @head: double pointer, pointer to a pointer of the previous node
 * @str: string to be duplicated and assigned to the new struct
 *
 * Return: pointer to the new list, head node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *old = *head;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = new->str ? _strlen(new->str) : 0;
	new->next = old;
	*head = new;
	return (*head);
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
