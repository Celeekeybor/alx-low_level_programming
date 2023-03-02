/**
 * leet - encode a string into 1337
 * @str: the string to encode
 *
 * Return: a pointer to the encoded string
 */
char *leet(char *str)
{
	char *ptr = str;
	char *leet_str = "aAeEoOtTlL";
	char *leet_code = "4433007711";

	for (; *ptr != '\0'; ptr++)
	{

	int i = 0;

	for (; leet_str[i] != '\0'; i++)
	{
	if (*ptr == leet_str[i])
	{
	*ptr = leet_code[i];
	break;
	}
	}
	}

	return (str);
}
