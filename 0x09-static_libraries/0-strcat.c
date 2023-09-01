#include "main.h"
/**
* _strcat - appends the src string to the dest string
* @dest: destination parameter character
* src: source pointer string
* Return: string des
*/
char *_strcat(char *dest, char *src)
{
	int m;
	int destl = 0;
	int srcl = 0;

	for (m = 0 ; dest[m] != '\0' ; m++)
		destl++;
	for (m = 0 ; src[m] != '\0' ; m++)
		srcl++;
	for (m = 0 ; m < srcl ; m++)
		dest[destl + m] = src[m];
	return (dest);
}
