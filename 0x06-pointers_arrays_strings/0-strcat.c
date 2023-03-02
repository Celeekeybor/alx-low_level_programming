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


	for (i = 0; dest[i] != "\0" i++)
	{
		for (j = 0; src[j] != "\0" j++)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		dest[1] = "\0";
		return (dest);
	}
}
