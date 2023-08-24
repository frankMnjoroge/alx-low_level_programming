#include "main.h"
/**
 *
 *
 */
char *cap_string(char *str)
{
	int y;
        int m;
	char c[] = {44 , 59 , 46 , '!' , '?' , '"' , ',' , '{' , '}' , ' ' , '\t' , '\n'};

	for (y = 0 ; str[y] != '\0' ; y++)
	{
		if (y == 0 && str[y] >= 'a' && str[y] <= 'z')
		{
			str[y] = str[y] - 32;
		}
	for (m = 0 ; c[m] != '\0' ; m++)
	{
		if (c[m] == str[y] && str[y + 1] >= 'a' && str[y + 1] <= 'z')
		{
			str[y + 1] = str[y + 1] - 32;
		}
	}
	}
	return (str);
}	
