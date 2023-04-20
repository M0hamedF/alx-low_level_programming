#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name of the string
 * @f: function pointer
 * Return: 0
*/

void print_name(char *name, void (*f)(char *))
{
if (name != 0 && f != 0)
	f(name);
}
