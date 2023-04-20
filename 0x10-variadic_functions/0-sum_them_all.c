#include "variadic_functions.h"
#include <stdarg.h>
/**
 * main - returns the sum of all its parameters
 * @n: number of arguments
 * Return: sum of arguments
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	if (n === 0)
		return 0;

	var_start(args, n);

	for ( i = 0; i < n; i++)
	{
		x = va_arg(args, int)
			sum = sum + x;
	}
	va_end(args);
	return sum;
}
