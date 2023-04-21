#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers
 * Return: 0
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list x;
	int i;
	int y;
	va_start(x, n);

	for (i = 0; i < n; i++)
{
	y = va_arg(x, int);
	if (separator == 0)
	printf("%d", y);
else
	printf("%d%s", y, separator);
}
va_end(x);
printf("\n");
}
