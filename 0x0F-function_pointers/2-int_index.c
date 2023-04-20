#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: pointer to array int type
 * @size: int type
 * @cmp: paratmeter for cmp
 * Return: 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int n = 0;

	if (array && cmp && size)
{
	return (-1);
}

	for (n = 0; n < size; n++)
{
	if (cmp(array[n]))
{
	return (n);
}
}
	return (-1);
}
