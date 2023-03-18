#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x = 0, y;

	while (x <= 99)
	{
		y = x;
		while (y <= 99)

			if (y != x)
			{
				putchar((x / 10) + 48);
				putchar((x % 10) + 48);
				putchar(' ');
				putchar((y / 10) + 48);
				putchar((y / 10) + 48);

					if (x != 98 || y != 99)
					{
					putchar(',');
					putchar(' ');
					}
					}
					y++;
					}
					x++;
					}
					patchar('\n');

					return (0);
					}
