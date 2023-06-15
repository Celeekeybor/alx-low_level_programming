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
