#include "search_algos.h"

/**
 * _binary_search - checks for a value in a sorted array
 * of integers using binary search.
 * @array: pointer to the first element of the array to search.
 * @left: starting index to the [sub]array to search.
 * @right: Ending index of the [sub]array to search.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL or -1.
 * Otherwise, the index where the value is located.
 *
 * Description: Prints the [sub]array being searched after each change.
 */

int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t z;

	if (array == NULL)
		return (-1);
	while (right >= left)
	{
		printf("Searching in array: ");
		for (z = left; z < right; z++)
			printf("%d, ", array[z]);
		printf("%d\n", array[z]);
		z = left + (right - left) / 2;
		if (array[z] == value)
			return (z);
		if (array[z] > value)
			right = z - 1;
		else
			left = z + 1;
	}
	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array
 * of integers using exponential search.
 * @array: pointer to the first element of the array to search.
 * @size: number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 * Otherwise, the index where the value is located.
 *
 * Description: Prints a value every time it is compared in the array.
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t z = 0, right;

	if (array == NULL)
		return (-1);
	if (array[0] != value)
	{
		for (z = 1; z < size && array[z] <= value; z = z * 2)
			printf("Value checked array[%ld] = [%d]\n", z, array[z]);
	}
	right = z < size ? z : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", z / 2, right);
	return (_binary_search(array, z / 2, right, value));
}
