#include "main.h"
/**
* string_toupper - converts string to uppercase
* @str: paramerer character
* Return: string  (successful)
*/
char *string_toupper(char *str)
{
	int m;

	for (m = 0 ; str[m] != '\0' ; m++)
	{
		if (str[m] >= 'a' && str[m] <= 'z')
		{
			str[m] = str[m] - 32;
		}
	}
	return (str);
}
