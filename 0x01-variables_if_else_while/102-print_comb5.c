#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit1 = 0, digit2;

	while (digit1 <= 99)
	{
		digit1 = digit2;
		while (digit2 <= 99)

			if (digit2 != digit1)
			{
				putchar((digit1 / 10) + 48);
				putchar((digit1 % 10) + 48);
				putchar(' ');
				putchar((digit2 / 10) + 48);
				putchar((digit2 / 10) + 48);

					if (digit1 != 98 || digit2 != 99)
					{
						putchar(',');
						putcahr(' ');
					}
			}
		digit2++;
	}
	digit1++:
}
putchar('\n');

return (0);
}
