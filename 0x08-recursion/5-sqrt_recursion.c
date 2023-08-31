#include "main.h"
int main_sqrt_recursion(int n, int m);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: parameter value
 * Return: 0 when succesful
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (main_sqrt_recursion(n, 0));
}
/**
 * main_sqrt_recursion - recursive number for the squareroot
 * @n: parameter value of number
 * @m: paramter value for iteration
 * Return: Square root of a number
 */
int main_sqrt_recursion(int n, int m)
{
	if (m * m > n)
		return (-1);
	if (m * m == n)
		return (m);
	return (main_sqrt_recursion(n, m + 1));
}
