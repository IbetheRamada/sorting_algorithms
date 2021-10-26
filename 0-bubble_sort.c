#include "sort.h"
/*
* bubble_sort -  a function that sorts an array of integers 
*in ascending order using the Bubble sort algorithm
*@array: a array with numbers
*@size: a size_t of array
*/
void bubble_sort(int *array, size_t size)
{
	long unsigned int i = 0, a = 0, tmp;

	if (array == NULL || size < 2)
		return;
	
	for (i = 0; i < size; i++)
	{
		for(a = 0; a < size - i - 1; a++)
		{
			if (array[a] > array[a + 1])
			{
				tmp = array[a];
				array[a] = array[a + 1];
				array[a + 1] = tmp;
				print_array(array, size);
			}
			
		}
		printf("\n");
	}
}
