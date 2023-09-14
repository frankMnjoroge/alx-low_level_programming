#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers -  prints numbers
 * @separator: string to be printed
 * @n: variable number to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nos;
	unsigned int index;

	va_start(nos, n);
	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nos, int));
		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nos);
}
