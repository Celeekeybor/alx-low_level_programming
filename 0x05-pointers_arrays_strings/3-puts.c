#include "main.h"

/**
 * _puts - print a string
 * @str: string
 * Return: void
 */
void _puts(char *str)
{       
        for (; *str != '\0'; str++)
        {       
        _putchar(*str);
	}
        _putchar('\n');
}
