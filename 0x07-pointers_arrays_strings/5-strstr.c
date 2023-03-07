/**
 * _strpbrk - a function that searches a
 * @s: pointer to input string
 * @accept: pointer to string we
 * Return: pointer to the bytes in @s
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
	}
	return ('\0');
}
Tobias Baraka2:12 AM
/**
 * _strstr - a function that locates a substring
 * @haystack: input string to search for matching
 *            substrings
 * @needle: subtring to search for
 * Return: a pointer to the beginning
*/

char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (!*n)
			return (h);
		haystack++;
	}
	return ('\0');
}
