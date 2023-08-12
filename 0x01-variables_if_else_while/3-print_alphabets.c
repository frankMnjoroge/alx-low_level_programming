#include<stdio.h>
/**
 * main -  main Function 
 *
 * Return: 0 (success)
 */

int main(void)
{
	char y;

	for (y = 'a' ; y <= 'z' ; y++)
		putchar(y);
	for (y = 'A' ; y <= 'Z' ; y++)
		putchar(y);
	putchar('\n');
	return (0);
}
