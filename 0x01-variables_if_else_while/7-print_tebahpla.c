#include <stdio.h>
/**
 * main -main function
 *
 * Return: 0 (success)
 */

int main(void)
{
	char m;

	for (m = 'z' ; m >= 'a' ; m--)
		putchar(m);
	putchar('\n');
	return (0);
}
