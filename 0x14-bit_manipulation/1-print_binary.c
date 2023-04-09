#include "main.h"

/**
* print_binary - prints the binary representation of a number
* @n: unsigned long int
* Return: binary number
*/

void print_binary(unsigned long int n)
{
unsigned long int cele = 1UL << (sizeof(unsigned long int) * 8 - 1);
int leading_zero = 1;
while (cele > 0)
{
if ((n & cele) == cele)
{
putchar('1');
leading_zero = 0;
}
else if (!leading_zero)
{
putchar('0');
}
cele >>= 1;
}
if (leading_zero)
{
putchar('0');
}
}
