#include "main.h"
#include <stdlib.h>

/**
 * create_array -  creates an array of charts and initialiazes
 * it with a specific char
 * @size: size of an array
 * @c: char to initialized
 * Return: pointer
*/

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);

	while (size--)
		n[size] = c;

	return (n);
}
