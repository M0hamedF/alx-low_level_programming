#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of arguments
 * @...: Arguments Variadic
 * Return: sum of arguments
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list argg;
	int sum = 0;
	int i;

	if (n == 0)
	return (0);

	var_start(argg, n);

	for (i = 0; i < n; i++)
	{
	sum += va_arg(argg, int);
	}
	va_end(argg);
	return (sum);
}
