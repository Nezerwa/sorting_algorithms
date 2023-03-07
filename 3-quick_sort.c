#include "sort.h"

/**
 * swap - switch position of the elements passed
 *
 * @x: pointer the first element
 * @y: pointer the second element
 */

void swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

/**
 * partition - partition array using start and end
 *
 * @array: array to be sorted
 * @start: start of the array
 * @end: end of the array
 * @size: size of the array
 *
 * Return: index of the pivot
 */

int partition(int *array, int start, int end, size_t size)
{
	int i;
	int pivot, pIndex;

	pivot = array[end];
	pIndex = start;

	for (i = start; i < end; i++)
	{
		if (array[i] < pivot)
		{
			if (pIndex != i)
			{
				swap(&array[pIndex], &array[i]);
				print_array(array, size);
			}
			pIndex++;
		}
	}

	swap(&array[pIndex], &array[end]);

	if (array[end] != pivot)
	{
		print_array(array, size);
	}
	return (pIndex);
}

/**
 * quick - recursive function using the pivot
 *
 * @array: array to be sorted
 * @start: start of the array
 * @end: end of the array
 * @size: size of the array
 */

void quick(int *array, int start, int end, size_t size)
{
	int pIndex;

	if (start >= end || start < 0)
		return;

	pIndex = partition(array, start, end, size);
	quick(array, start, pIndex - 1, size);
	quick(array, pIndex + 1, end, size);
}

/**
 * quick_sort - function caling sort method
 *
 * @array: array to be sorted
 * @size: size of the array
 */

void quick_sort(int *array, size_t size)
{
	size_t start, end;

	start = 0;
	end = size - 1;

	quick(array, start, end, size);
}
