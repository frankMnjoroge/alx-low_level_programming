#include "main.h"
/**
* _strpbrk - searches a string for any of a set of bytes
* @s: Parameter value
* @accept: parameter value*
* Return: always 0 for sucess
*/
char *_strpbrk(char *s, char *accept)
{
	int m;

	while (*s)
	{
		for (m = 0; accept[m]; m++)
		{
			if (*s == accept[m])
				return (s);
		}
		s++;
	}
	return ('\0');
}
