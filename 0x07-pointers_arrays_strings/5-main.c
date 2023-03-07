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
