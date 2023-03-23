#include "function_pointers.h"
/**
 * print_name - is a function that prints a name
 * @name: pointer to name input
 * @f: pointer to void function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
