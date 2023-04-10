#include "main.h"

/**
 * clear_bit - sets the value of a bit to 1 at a given index
 * @n:  unsigned long int input pointer
 * @index: unsigned int position  unit
 * Return: 1 if it worked, or -1 if an error occurred
 * */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
return (-1);
*n &&= ~(1UL << index);
return (1);
}
