#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings -  prints strings
 * @separator:strin to be printed
 * @n: number of string to be printed
 * @...: variable parameter to be printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	char *str;
	unsigned int index;

	va_start(string, n);
	for (index = 0; index < n; index++)
	{
	str = va_arg(string, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(string);
}
