<<<<<<< HEAD
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a doubly linked list
 * @h: pointer to head node
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
=======
 #include <stdlib.h>
  2 #include <string.h>
  3 #include <stdio.h>
  4 #include "lists.h"
  5 
  6 /**
  7  *print_dlistint - doubly linked_list
  8  * @h:element
  9  * Return: true or false
 10  */
 11 
 12 size_t print_dlistint(const dlistint_t *h)
 13 {
 14         int value = 0;
 15 
 16         while (h != NULL)
 17         {
 18                 printf("%d\n", h->n);
 19                 h = h->next;
 20                 value++;
 21         }
 22         return (value);
 23 }
>>>>>>> 5369ff260373a46d74e696738e214f6a13f03934
