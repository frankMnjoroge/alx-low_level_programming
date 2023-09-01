#include "main.h"
#include <stdio.h>
/**
 * main -  prints all arguments it receives.
 * @argc: parameter value
 * @argv: parameter array
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int m;

	for (m = 0 ; m < argc ; m++)
		printf("%s\n", argv[m]);
	return (0);
}
