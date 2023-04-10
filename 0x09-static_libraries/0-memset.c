#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @b: constant
 * @s: pointer to put constant
 * @n: size of bytes
 * Return: Nothing.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
