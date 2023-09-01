#include "main.h"
/**
* _memset - fills memory with a constant byte
* @s: parameter value to hold characters
* @b: parameter value of second character
* @n: parameter value number
* Return: array with value of bytes if successful
*/
char *_memset(char *s, char b, unsigned int n)
{
	int p;

	for (p = 0 ; n  > 0 ; p++)
	{
		s[p] = b;
		n--;
	}
	return (s);
}
