#include "function_pointers.h"

/**
*int_index- returns the index of the first element
* @array: ...
* @size: is the number of elements in the array array
* @cmp: ...
* Return:If no element matches, return -1
*/
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

