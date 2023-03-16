#include "main.h"
#include <stdlib.h>

/**
 * _memset - is a function that copies char
 * @s: string input
 * @b: input to be copied
 * @n: bytes to be copied
 * Return: string output
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
/**
 * _calloc - isa function that allocates memory for an array using malloc
 * @nmemb: allocates for n elements input
 * @size: input of bytes to allocate
 * Return: pointer to new memory place
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, (nmemb * size));
	return (ptr);
}
