#include "main.h"
/**
* _isupper -  a function that checks for uppercase character
* @c: parameter value
* Return: 1 successful and false otherwise
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
