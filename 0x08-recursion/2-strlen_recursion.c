#include "main.h"

/**
 * _strlen_recursion - a function to return the lenght of the string
 * @s:pointer string
 * Return: int
*/

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
