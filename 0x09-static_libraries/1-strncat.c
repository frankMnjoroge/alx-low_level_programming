#include "main.h"
/**
* _strncat -  concatenates two strings
* @dest: destination string
* @src: source string
* @n: paramter value of bytes
* Return: concatenated string
*/
char *_strncat(char *dest, char *src, int n)
{
	int index = strlen(dest);
	int m;

	for (m = 0 ; m < n && *src != '\0' ; m++)
	{
		dest[index + m] = *src;
		src++;
	}
	dest[index + m] = '\0';
	return (dest);
}
