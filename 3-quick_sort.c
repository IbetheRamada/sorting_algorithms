#include "sort.h"

/**
* exchange - function that changes positions
* @array: an array of numbers
* @size1: an size = 0
* @size2: an size = size - 1
* @size: size of array
* Return: Always(i+1)
*/
size_t for_exchange(int *array, ssize_t size1, ssize_t size2, size_t size)
{
	ssize_t i, j;
	int tmp, pivot;

	pivot = array[size2];
	i = size1 - 1;
	for (j = size1; j < size2; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
		}
	}
	if (array[size2] < array[i + 1])
	{
		tmp = array[i + 1];
		array[i + 1] = array[size2];
		array[size2] = tmp;
		print_array(array, size);
	}
	return (i + 1);
}

/**
* sort - function that checks if size 1 is less than size 2
* @array: an array of numbers
* @size1: an size = 0
* @size2: an size = size - 1
* @size: size of array
*/
void sorting(int *array, ssize_t size1, ssize_t size2, size_t size)
{
	ssize_t pivot;

	if (size1 < size2)
	{
		pivot = for_exchange(array, size1, size2, size);
		sorting(array, size1, pivot - 1, size);
		sorting(array, pivot + 1, size2, size);
	}
}

/**
* quick_sort - function that sorts an array of
* integers in ascending order using the
* Quick sort algorithm
*@array: An array of numbers
*@size: size of array
*/

void quick_sort(int *array, size_t size)
{

	if (array == NULL || size < 2)
		return;
	sorting(array, 0, size - 1, size);
}
