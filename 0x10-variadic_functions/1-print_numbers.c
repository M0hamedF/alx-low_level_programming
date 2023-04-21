#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers
 * Return: 0
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
unsigned int i;
	int number;

va_start(arg, n);
for (i = 0; i < n; i++)
{
number = va_arg(arg, int);
if (separator == NULL || i == n - 1)
	printf("%d", number);
else
	printf("%d%s", number, separator);
}
va_end(arg);
printf("\n");
}
