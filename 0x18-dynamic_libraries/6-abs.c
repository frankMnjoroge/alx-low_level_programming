#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer.
 * @m: paramter of int data type
 * Return: 0 (success)
 */
int _abs(int m)
{

	if (m < 0)
	{
		return (-m);
	}
	else if (m >= 0)
	{
		return (m);
	}
	else

		return (0);
}
