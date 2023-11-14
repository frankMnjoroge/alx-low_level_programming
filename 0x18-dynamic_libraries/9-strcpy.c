#include "main.h"
/**
* _strcpy - copies the string pointed to by src
* @dest: destination of the string
* @src: string source parameter
* Return: dest upon success
*/
char *_strcpy(char *dest, char *src)
{
	int m;

	for (m = 0 ; src[m] != '\0' ; m++)
		dest[m] = src[m];
	dest[m] = '\0';
	return (dest);
}
