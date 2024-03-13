#include "search_algos.h"

/**
 * recursive_search - checks for a value in an array of
 * integers using Binary search algorithm
 *
 * @array: the input array
 * @size: array size
 * @value: the value to search
 * Return: the index of the number
 */

int recursive_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t z;

	if (array == NULL || size == 0)
		return (-1);
	printf("Searching in array");
	for (z = 0; z < size; z++)
		printf("%s %d", (z == 0) ? ":" : ",", array[z]);
	printf("\n");
	if (half && size % 2 == 0)
		half--;
	if (value == array[half])
		return ((int)half);
	if (value < array[half])
		return (recursive_search(array, half, value));
	half++;
	return (recursive_search(array + half, size - half, value) + half);
}

/**
 * binary_search - checks binary_search to return
 * the index of the number
 *
 * @array: the input array
 * @size: array size
 * @value: the value to search
 * Return: the index of the number
 */

int binary_search(int *array, size_t size, int value)
{
	int index;

	index = recursive_search(array, size, value);
	if (index >= 0 && array[index] != value)
		return (-1);
	return (index);
}
