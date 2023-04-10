#include "main.h"

/**
 * clear_bit - sets the value of a bit to 1 at a given index
 * @n: input unsigned long int pointer
 * @position: unsigned int index
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int position)
{
if (position>= sizeof(unsigned long int) * 8)
return (-1);
*n &= ~(1UL << position);
return (1);
}
