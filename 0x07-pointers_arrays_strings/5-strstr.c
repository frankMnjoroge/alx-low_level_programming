#include "main.h"
/**
* _strstr - locates a substring.
* @haystack: parameter one
* @needle: parameter two
* Return: 0 if successful
*/
char *_strstr(char *haystack, char *needle)
{
	int m;

	while (*haystack)
	{
		for (m = 0; needle[m]; m++)
		{
			if (*haystack == needle[m])
				return (haystack);
			else if (needle[m + 1] == '\0')
				return (haystack++);
			m++;
		}
		haystack++;
	}
	return ('\0');
}
