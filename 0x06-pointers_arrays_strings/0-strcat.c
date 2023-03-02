#include "main.h"
/**
 * _strcat- concatenate two strings
 * @dest: input the value
 * @src: input the value
 *
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		desrt[i] = src[j];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
