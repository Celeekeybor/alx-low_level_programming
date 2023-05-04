#include "main.h"

/**
 * get_endianness - checks the end of the code
 * @cele:
 * @kibor:
 * Return: endiassness function
*/

int get_endianness(void)
{
unsigned int cele = 1;

char *kibor = (char *)&cele;

if (*kibor)
{
return (1);
}
return (0);
}
