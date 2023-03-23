#ifndef _VARIADIC_FUNCTION_
#define _VARIADIC_FUNCTION_

#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
