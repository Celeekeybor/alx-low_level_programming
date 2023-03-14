#include "main.h"
#include <stdlib.h>
/**
 * count - is a function counts the number of words in a string
 * @s: is a pointer to a string
 * Return: the number of worda
 */

int count(char *s)
{
	int i, num = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != ' ' && (s[i + 1] == ' ' || s[i + 1] == '\0'))
		{
			num++;
		}
	}

	return (num);
}

/**
 * strtow - is a function that splits a string into words
 * @str: is a pointer to the string
 * Return: a pointer to an array of strings (words)
 */

char **strtow(char *str)
{
	char **words;
	int num, i, j, k, l, m = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	num = count(str);
	if (num == 1)
		return (NULL);
	words = (char **) malloc(sizeof(char *) * num);
	if (words == NULL)
		return (NULL);
	words[num - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			words[m] = (char *) malloc(sizeof(char) * j);
			j--;
			if (words[m] == NULL)
			{
				for (k = 0; k < m; k++)
					free(words[k]);
				free(words[num - 1]);
				free(words);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				words[m][l] = str[i + l];
			words[m][l] = '\0';
			m++;
			i += j;
		}
		else
			i++;
	}
	return (words);
}
