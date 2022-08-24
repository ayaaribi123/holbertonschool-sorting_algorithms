#include <stdio.h>
#include "sort.h"
/**
*bubble_sort - Prints a list of integers
*@array: int
*@size: size_t
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, p;
	int temp;

	for (i = 0; p < (size - 1); i++)
	{
		for (p = 0; p < ((size - i) - 1); p++)
		{

			if (array[p] > array[p + 1])
			{
				temp = array[p];
				array[p] = array[p + 1];
				array[p + 1] = temp;
				print_array(array, size);
			}
	
		}
	}
}
