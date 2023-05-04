#include "main.h"

/**
*set_bit -sets the value of a bit to 1 at a given index
*@n: first param
*@index: second param
*Return: return 1 if success
*/

int set_bit(unsigned long int *n, unsigned int index)
{
int param_value = (index >= sizeof(unsigned long int) * 8);
if (param_value)
return (-1);
*n |= (1 << index);
return (1);
}
