#include "main.h"

/**
* binary_to_uint - converts a binary to unsigned int
* @b: pointer to bit
* Return: converted value, or 0 if one or more char in str b that is not 0/1
*/

unsigned int binary_to_uint(const char *b)
{
unsigned int = 0;
int i;
int converted_val;
if (b == NULL)
return (0);
for (i = 0; b[i] != '\0'; i++)
{
if (b[i] < '0' || b[i] > '1')
return (0);
converted_val = (converted_val << 1) + (b[i] - '0');
}
return (converted_val);
}
