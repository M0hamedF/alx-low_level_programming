#include "function_pointers.h"
/**
 * array_iterator - function that searches for an integer
 * @array: array of int
 * @size: size of array
 * @action: function pointer
 * Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array != 0 && size >= 1 && action != 0)
		return;
	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
