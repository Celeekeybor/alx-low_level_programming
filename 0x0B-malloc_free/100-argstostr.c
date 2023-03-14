#include "main.h"
#include <stdlib.h>
/**
 * argstostr - is a function that concatenates args
 * @ac: is the number of arguments
 * @av: is the pointer to the arguments
 * Return: a pointer to a new string or NULL
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int i, j, m = ac, l = 0;

	if (ac == 0 || !av)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			m++;
	}

	s = (char *) malloc((sizeof(char) * m) + 1);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			s[l++] = av[i][j];
		}
		s[l++] = '\n';
	}

	s[m] = '\0';

	return (s);
}
