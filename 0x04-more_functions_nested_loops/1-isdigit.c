#include "main.h"
/**
 * _isdigit - function that checks for a digit 0 to 9
 * @c: Paramter valuee
 * Return: 1 for digit 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
