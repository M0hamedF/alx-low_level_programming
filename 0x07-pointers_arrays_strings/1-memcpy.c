#include "main.h"

/**
 * _memcy - copies memory area
 * @dest: memory area
 * @src: source location
 * @n: size in bytes
 * return: char
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	for (i = 0, i < n, i++)
	{
		dest[i] = src[i];
	}
	return(dest);
}
