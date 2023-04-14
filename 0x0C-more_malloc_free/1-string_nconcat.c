#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: secound string
 * @n: number of bytes
 * Return: char
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, x, y;
	char *str;

	if (s1 == NULL)
		s1 = nul;
	if (s2 == NULL)
		s2 = nul;

	for (x = 0; s1[x] != '\0'; x++)
		;
	for (y = 0; s2[y] != '\0'; y++)
		;
	str = malloc(x + n + 1)
		if (str == NULL)
{
		return (NULL);
}
	for (i = 0; si[i] != '\0'; i++)
str[i] = s1[i];
for (j = 0; j < n; j++)
{
str[i] = s2[j];
i++;
}
str[i] = '\0'
return (str);
}
