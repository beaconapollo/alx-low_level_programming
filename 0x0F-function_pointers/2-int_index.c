#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches an integer
 * @array: array to search on
 * @size: the number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp ||)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
		return (-1);
	}
}
