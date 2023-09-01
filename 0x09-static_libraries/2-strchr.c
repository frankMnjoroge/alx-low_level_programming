#include "main.h"
/**
* _strchr - locates a character in a string
* @s: parameter value 1
* @c: paremeter value 2
* Return: 0 success
*/
char *_strchr(char *s, char c)
{
	int m;

	for (m = 0 ; s[m] >= '\0' ; m++)
	{
		if (s[m] == c)
			return (&s[m]);
	}
	return (0);
}
