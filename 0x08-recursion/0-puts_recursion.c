#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: points to string
 * Return: void
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		s++;
		_putchar_recursion(s);

	}
}