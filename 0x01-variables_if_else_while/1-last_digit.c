#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main function
 *
 * Return: 0 (successful)
 */
int main(void)
{
	int n;
	int p;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	p = n % 10;
	if (p > 5)
		printf("last digit of %d is %d and is greater than 5", n, p);
	else if (p == 0)
		printf("last digit of %d is %d and is 0", n, p);
	else if (p < 6 && p != 0)
		printf("last digit of %d is %d and is less than 6 and not 0", n, p);

	printf("\n");

	return (0);
}
