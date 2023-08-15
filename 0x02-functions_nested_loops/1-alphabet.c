#include <unistd.h>
#include "main.h"
/**
 * print_alphabet - function prints the alphabet, in lowercase
 *
 * Return: 0 (success)
 */

void print_alphabet(void)
{
	char m;

	for (m = 'a' ; m <= 'z' ; m++)
		_putchar(m);
	_putchar('\n');
}
