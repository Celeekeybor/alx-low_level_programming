#include "main.h"

/**
 * set_bit: set bit value to 1 at a given index
 * @n: unsigned long int input pointer
 * @index: type unsigned int position of unit
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
for(index >= sizeof(unsigned long int) * 8)
return (-1);
*n |= 1UL << index;
return (1);
}
