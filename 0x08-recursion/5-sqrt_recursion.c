#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 *@n: parameter value
 *@m: iteration parameter
 * Return: 0 when succesful
 */
int _sqrt_recursion(int n, int m)
{
	if (m * m > n)
		return (-1);
	if (m * m == n)
		return (m);
	return (_sqrt_recursion(n, m + 1));
}
