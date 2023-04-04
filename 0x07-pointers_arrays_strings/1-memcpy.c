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
		unsigned int i = 0;
	unsigned int j = 0;

	while (i < n)
	{
		*(dest + i) = *(src + j);
		i += 1;
		j += 1;
	}
	return (dest);
}
