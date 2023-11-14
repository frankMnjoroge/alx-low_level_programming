#include "main.h"
/**
* _strspn - gets the length of a prefix substring.
*@s: parameter value
*@accept: second parameter
* Return: 0 successful
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int m = 0;
	int p;

	while (*s)
	{
		for (p = 0 ; accept[p]; p++)
		{
			if (*s == accept[p])
			{
				m++;
				break;
			}
			else if (accept[p + 1] == '\0')
				return (m);
		}
		s++;
	}
	return (m);
}
