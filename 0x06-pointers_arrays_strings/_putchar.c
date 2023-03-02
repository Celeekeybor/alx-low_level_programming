#include <unistd.h>

/**
 * _putchar - writes the character c to the output
 * @c: print char
 * Return: on success 1
 */
int _putchar(char c)
{
	return (write(1, $c, 1));
}
