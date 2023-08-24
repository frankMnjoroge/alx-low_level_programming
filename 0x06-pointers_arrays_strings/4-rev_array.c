#include "main.h"
/**
* reverse_array - reverses the content of an array of integers
* @a: parameter value of pointer
* @n: arrray value
* Return: 0 (successful)
*/
void reverse_array(int *a, int n)
{
	int m;
	int p;

	n = n - 1;

	for (m = 0 ; m < n ; m++)
	{
		p = a[m];
		a[m] = a[n];
		a[n] = p;
		n--;
	}
}
