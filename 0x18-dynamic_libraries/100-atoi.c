#include "main.h"
/**
 * _atoi - function to change string to integer.
 * @s: parameter value
 * Return: string upon success
 */
int _atoi(char *s)
{
	short b;
	int i, minus, result;

	i = minus = result = b = 0;
	minus = -1;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			minus *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			result *= 10;
			result -= (s[i] - '0');
			b = 1;
		}
		else if (b  == 1)
			break;
		i++;
	}
	result *= minus;
	return (result);
}
