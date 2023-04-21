#include "variadic_functions.h"

/**
 * print_strings - function with 3 parameter
 * @separator: String to be printed between strings
 * @...: Arguments Variadic
 * Return: 0
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list aurg;
	char *ptr;

	va_start(aurg, n);

	for (i= 0; i < n; i++)
{
	ptr = va_arg(aurg, char *);
	if (ptr != 0)
	printf("%s", ptr);

	else
	printf("(nil)");

	if (i < (n - 1) && separator != 0)
	printf("%s", separator);
}
	va_end(aurg);
	printf("\n");
}
