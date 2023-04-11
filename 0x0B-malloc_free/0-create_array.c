#include "main.h"

/**
 * create array -  creates an array of charts
 * @size: size of an array
 * @c: char to initialized
*/

char *create_array(unisgned int size, char c)
{
	char *n = malloc(size);

	if (size == 0|| n == 0)
		return (0);
	
	while (size--)
		n[size] = c;

	return (n);
}
