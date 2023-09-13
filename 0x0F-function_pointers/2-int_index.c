#include "function_pointers.h"
/**
 * int_index - searches for an integer in an array
 * @array: array of integers
 * @size: size of array
 * @cmp: pointer to fucntion
 * Return: -1 if size is less than 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}
	return (-1);
}
