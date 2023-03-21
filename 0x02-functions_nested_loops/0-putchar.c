#include <stdio.h>

/**
 * main - Entry point
 *
 *Description: print _putchar
 *
 *Return: always 0
*/

int main(void)
{
	char str[] = "_putcher";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	_putcher('\n');

	return (0);
}
