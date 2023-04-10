#include "main.h"

/**
 * get_bit - return the value of a bit in a given index
 * @n: input unsigned long int 
 * @index:  unsigned int position of unit
 * Return:  the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
while (index >= sizeof(unsigned long int) * 8)
return (-1);
return ((n >> index) & 1);
}
