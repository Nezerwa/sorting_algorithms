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
 * selection_sort - Sorts an array of integers in ascending order
 * using the Selection sort algorithm
 *
 * @array: Array to be sorted
 * @size: Size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, jmin;

	if (size >= 2)
	{
		for (i = 0; i < size - 1; i++)
		{
			jmin = i;
			for (j = i + 1; j < size; j++)
			{
				if (array[j] < array[jmin])
					jmin = j;
			}
			if (jmin != i)
			{
				swap(&array[i], &array[jmin]);
				print_array(array, size);
			}
		}
	}
}
