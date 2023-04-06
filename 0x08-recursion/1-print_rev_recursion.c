#include "main.h"

/**
 * _print_rev_recursion - a function to reverse a string
 * @s: pointer to string
 * Return: nothing
*/

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
			putchar(*s);
	}
}
