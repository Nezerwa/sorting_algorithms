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
