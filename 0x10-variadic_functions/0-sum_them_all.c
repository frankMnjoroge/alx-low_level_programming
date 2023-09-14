#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of parameter of the function
 * @...: variable number of parameters
 * Return: 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int y, sum;

	sum = 0;
	va_start(ap, n);

	for (y = 0; y < n; y++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
