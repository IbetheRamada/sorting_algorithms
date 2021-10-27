#include "sort.h"

/**
* selection_sort - function that sorts an array of
*integers in ascending order using the
*Selection sort algorithm
*
*@array: a array of numbers
*@size: size_t of array
*/
void selection_sort(int *array, size_t size)
{
	unsigned long int i, a, idx;
	int tmp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		idx = i;
		for (a = i + 1; a < size; a++)
		{
			if (array[a] < array[idx])
				idx = a;
			tmp = array[idx];
			array[idx] = array[i];
			array[i] = tmp;

			
		}
		print_array(array, size);
	}
}
