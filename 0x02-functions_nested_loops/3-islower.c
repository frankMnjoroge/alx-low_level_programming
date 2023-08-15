#include "main.h"
/**
 * _islower - function that returns 1 or zero if characters are in low case
 * @c: parameters
 *
 * Return: 0 or 1 (success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
