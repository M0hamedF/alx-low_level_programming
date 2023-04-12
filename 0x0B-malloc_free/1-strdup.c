#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * whitch contains a copy of the string given as a parameter
 * @str: string
 * Return: char
*/

char *_strdup(char *str)
{
	char *n;
	int i, j = 0;

	if (str == NULL)
	return (0);

	for (; str[j] != '\0'; j++)
	;
	n = malloc(j * sizeof(*str) + 1);

	if (n == 0)
	return (0);
	else
{
	for (; i < j; i++)
	n[1] = str[1];
}
	return (n);
}

