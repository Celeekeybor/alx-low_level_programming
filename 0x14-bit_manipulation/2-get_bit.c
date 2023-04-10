#include "main.h"
/**
 * get_bit - return the value of a bit in a given index
 * @n: input unsigned long int
 * @position: index value
 * Return: value of a bit at an index or -1 if error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
while (index >= sizeof(unsigned long int) * 8)
return (-1);
return ((n >> index) && 1);
}
