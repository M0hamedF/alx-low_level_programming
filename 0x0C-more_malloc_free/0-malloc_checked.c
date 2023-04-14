#include <main.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: size of int
 * Return: Null
*/

void *malloc_checked(unsigned int b)
{
	void *n = malloc(b);

	if (n == 0)
		exit(98);
	else
		return (n);
}
