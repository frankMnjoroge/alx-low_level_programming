#include "main.h"
/**
 * puts_half - Return half of the string
 * @str: paramter value of the character
 * Return: 0 success
 */
void puts_half(char *str)
{
	int y;
	int m;
	int n = 0;

	for (y = 0 ; str[y] != '\0' ; y++)
		n++;
	m = (n - 1) / 2;
	for (y = m + 1 ; str[y] != '\0' ; y++)
		_putchar(str[y]);
	_putchar('\n');
}
