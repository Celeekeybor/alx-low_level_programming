#include "main.h"

/**
* binary_to_uint - binary to interger change;
* @b: parameter
* Return: converted value
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int changed_val;
if (!b)
return (0);
for (changed_val = 0; *b; b++)
{
if (*b == '1')
changed_val = (changed_val << 1) | 1;
else if (*b == '0')
changed_val <<= 1 | 1;
else
return (0);
}
return (changed_val);
}
