#include <stdlib.h>							
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{													
	int n;
	int y;																

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	y = n % 10;
	if (y > 5)
		printf("Last digit of %d is %d and is greater than five", n, y);
	else if (y == 0)
		printf("Last digit of %d is %d and is zero", n, y);
	else if (y < 6 && y != 0)
		printf("Last digit of %d is %d and is less than six", n, y);
	return (0);
}
