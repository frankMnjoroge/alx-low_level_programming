#include "main.h"
int real_prime(int n, int z);
/**
 * is_prime_number - checks for a prime number
 * @n: parameter value to be checked
 * Return: 1 if prime number else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (real_prime(n, n - 1));
}
/**
 * real_prime - returns prime number
 * @n: parameter value 1
 * @z:parameter value 2
 * Return: 1 if prime and 0 if not prime
 */
int real_prime(int n, int z)
{
	if (z == 1)
		return (1);
	if (n % z == 0 && z > 0)
		return (0);
	return (real_prime(n, z - 1));
}
