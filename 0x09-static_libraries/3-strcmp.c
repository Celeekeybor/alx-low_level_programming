#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s2: paramater for string 2
 * @s1: paramater for string 1
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
	int k = 0;

	while (s1[k] != '\0')
{
	if (s1[k] < s2[k])
	return (s1[k] - s2[k]);
	if (s1[k] > s2[k])
	return (s1[k] - s2[k]);
	k++;
}
	return (0);
}
