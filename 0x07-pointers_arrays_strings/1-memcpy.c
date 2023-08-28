#include "main.h"
/**
* _memcpy - copies n bytes from memory area src to memory area des
* @dest: Destination
* @src: source
* @n: parameter value of bytes
* Return: pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int p;
	int m = n;

	for (p = 0 ; p < m ; p++)
	{
		dest[p] = src[p];
		n--;
	}
	return (dest);
}
