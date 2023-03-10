#include "main.h"

/**
 * _memset - prints buffer
 * @s: the address of memory to print
 * @n: size of the memory to print
 * @b: data type to be printed
 * Return: Zero.
 */

char *_memset(char *s, char b, unsigned int n)
{

while (n > 0)
{
s[n - 1] = b;
n--;
}
return (s);
}
