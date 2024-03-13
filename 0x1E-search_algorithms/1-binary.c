#include "search_algos.h"

/**
  * binary_search - Searches for a value in a sorted array
  *                 of integers using binary search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         else, the index where the value is located.
  *
  * Description: Prints the [sub]array being searched after each change.
  */
int binary_search(int *array, size_t size, int value)
{
	size_t j, lft, rght;

	if (array == NULL)
		return (-1);

	for (lft = 0, rght = size - 1; rght >= lft;)
	{
		printf("Searching in array: ");
		for (j = lft; j < rght; j++)
			printf("%d, ", array[j]);
		printf("%d\n", array[j]);

		j = lft + (rght - lft) / 2;
		if (array[j] == value)
			return (j);
		if (array[j] > value)
			rght = j - 1;
		else
			lft = j + 1;
	}

	return (-1);
}
