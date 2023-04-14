#include "main.h"

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: input size 1
 * @size: input size bytes
 * Return: nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *cal;

	if (nmemb == 0 || size == 0)
		return (NULL);
	cal = malloc(nmemb * size);
	if (cal == NULL)
		return (NULL);
	_memset(cal, 0, nmemb * size);
	return (cal);
}

/**
 * _calloc -  allocates memory using malloc and initializes in 0
 * @nmemb: number of elements of array to allocate
 * @size: size of elements
 *
 * Return: Pointer to allocated memory or normal process termination
 * with a status value of 98
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;


	if (nmemb == 0 || size == 0)
		return (0);

	p = malloc(nmemb * size);
	if (p == 0)
		return (0);
	_memset(p, 0, size * nmemb);

	return (p);
}
