#include "main.h"
/**
* print_rev - prints a string, in reverse
* @s: parameter string value
* Return: 0 success
*/
void print_rev(char *s)
{
	int m;
	int n;
	n = 0;

	for(m = 0; s[m]!='\0' ; m++)
		n++;
	for(m = n-1 ; m >=0 ; m--)
		_putchar(s[m]);
	_putchar('\n');
}
