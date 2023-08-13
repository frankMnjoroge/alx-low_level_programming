# include <stdio.h>
/**
 * main- main Function
 *
 * Return: 0(success)
 */

int main(void)
{
	char p;

	for (p = 'a' ; p <= 'z' ; p++)
		if (p != 'q' && p != 'e')
			putchar(p);
	putchar('\n');
	return (0);
}

