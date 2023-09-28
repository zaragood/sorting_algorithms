#include "sort.h"
/**
 * selection_sort - function that sorts an array in accending oder
 * using selection sort algorithm
 * @array: array of integers
 * @size: size of the array to be sorted
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min, temp;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			/*find the minimum value in the unsorted array*/
			if (array[j] < array[min])
			{
				/*update the value of min till you get the minimum val*/
				min = j;
			}
		}
		if (min != i)
		{
			/*swap the minimum value in the array with the val at first index*/
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}
