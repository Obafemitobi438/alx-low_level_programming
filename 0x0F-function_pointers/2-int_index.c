#include "function_pointers.h"

/**
 * int_index - Returns index of first element
 * @array: Given parameters
 * @size: Number of elements in the array
 * @cmp: Pointer to function to be used to compare values
 * Return: -1 is size <= 0
 **/

int int_index(int *array, int size, int (*cmp)(int))

{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)

		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}
	return (-1);

}
