#include <stdio.h>
#include "main.h"
/**
 * main - program that prints the number of arguments
 * @argc: parameter values
 * @argv: parameter array
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
