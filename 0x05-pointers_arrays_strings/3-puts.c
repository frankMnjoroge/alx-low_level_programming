#include "main.h"
/**
 * _puts -  prints a string, followed by a new line
 * @str: String to be printed
 * Return: 0 (success)
 */
void _puts(char *str)
{
	int y;

	for (y = 0 ; str[y] != '\0' ; y++)
		_putchar(str[y]);
}

