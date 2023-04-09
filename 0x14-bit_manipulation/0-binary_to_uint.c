#include "main.h"


/**
 * binary_to_uint - converts binary to an unsigned int
 * @b: string pointer
 *
 * Return: integer or 0 if
 * - string b is not 0 or 1
 * - b is NULL
 */
unsigned int binary_to_uint(const char *b);
{
unsigned int decimal = 0, power;
int len = bit_check(b);
if (b == NULL || !len)
return (0);
while (power = 1, len--; len >= 0; len--, power *= 2)
{
if (b[len] == '1')
decimals = decimals+ power;
}
return (decimals);
}
