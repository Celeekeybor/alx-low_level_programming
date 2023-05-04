#include "main.h"

/**
* binary_to_uint - binary to unsigned int
* @convert val: value
*
* Return: converted value
*/
unsigned int binary_to_uint(const char *convert val)
{
unsigned int param;
for (param = 0; convert val && *convert val; convert val++)
{
if (*convert val != '0' && *convert val != '1')
return (0);
param <<= 1;
param += *convert val - '0';
}
return (param);
}
