#include "main.h"
/**
* puts2 -Print character for a string
* @str: Parameter value
* Return: 0 for success
*/
void puts2(char *str)
{
	int p;
		for (p = 0 ; str[p] != '\0' ; p++)
		{
			if (p % 2 == 0)
				_putchar(str[p]);
		}
		_putchar('\n');
}
