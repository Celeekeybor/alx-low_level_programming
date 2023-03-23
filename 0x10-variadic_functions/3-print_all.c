#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_all - is a function that prints anything
 * @format: list of all arguments passed to the function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	unsigned int i;
	va_list numbers;
	char *p, *separator;

	va_start(numbers, format);
	separator = "";
	i = 0;
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(numbers, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(numbers, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(numbers, double));
				break;
			case 's':
				p = va_arg(numbers, char *);
				if (p == NULL)
					p = "(nil)";
				printf("%s%s", separator, p);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(numbers);
}
