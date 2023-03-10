#include "main.h"

/**
 * _isalpha - Retuns 1 if char is uppercase character
 * else, return 0
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for uppercase. 0 for the rest.
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
