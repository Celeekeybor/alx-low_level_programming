#include "main.h"
#include <ctype.h>

/**
 * cap_string - capitalize
 * @str: the string to modify
 * Return: a pointer to the modified string
 */

char *cap_string(char *str)
{
	int i = 0;
	char *ptr = str;

	while (ptr[i] != '\0')
	{
	if (i == 0 || ptr[i - 1] == ' ' || ptr[i - 1] == '\t' || ptr[i - 1] == '\n'
	|| ptr[i - 1] == ',' || ptr[i - 1] == ';' || ptr[i - 1] == '.'
	|| ptr[i - 1] == '!' || ptr[i - 1] == '?' || ptr[i - 1] == '"'
	|| ptr[i - 1] == '(' || ptr[i - 1] == ')' || ptr[i - 1] == '{'
	|| ptr[i - 1] == '}')
	{
	ptr[i] = toupper(ptr[i]);
	}
	i++;
	}

	return (str);
}
