#include "main.h"
/**
* _strncpy - Copies a string
* @dest: Detination string
* @src: source string
* @n: string bytes
* Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int m;

	for (m = 0 ; m < n && src[m] != '\0' ; m++)
		dest[m] = src[m];
	while (m < n)
	{
		dest[m] = '\0';
		m++;
	}
	return (dest);
}
