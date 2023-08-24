#include "main.h"
/**
* leet - function that encodes a string*
* @str: character parameter to encode
* Return: 0 for successful encoding
*/
char *leet(char *str)
{
	int y;
	int z;
	char c[] = "aAeEoOtTlL";
	char m[] = "4433007711";

	for (y = 0 ; str[y] != '\0' ; y++)
	{
		for (z = 0 ; c[z] != '\0' ; z++)
		{
			if (str[y] == c[z])
			{
				str[y] = m[z];
			}
		}
	} 
	return (str);
}
