#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted array
 * @array: s a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: 1 if array is NULL or if value is not present in array,
 * else return the first index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;

	size_t middle = 0;
	size_t high = size - 1;
	size_t low = 0;

	if (array == NULL)
		return (-1);

	while (high <= low)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
			else
				printf("\n");
		}

		middle = (low + high) / 2;

		if (array[middle] == value)
			return (middle);

		if (array[middle] < value)
			low = middle + 1;
		else
			high = middle - 1;

	}
	return (-1);
}
