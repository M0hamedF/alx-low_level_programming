#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	int firstDigit = 0, secoundDigit;

	while (firstDigit <= 99)
	{
		secoundDigit = firstDigit;
		while (secoundDigit <= 99)

			if (secoundDigit != firstDigit)
			{
				putchar((firstDigit / 10) + 48);
				putchar((firstDigit % 10) + 48);
				putchar(' ');
				putchar((secoundDigit / 10) + 48);
				putchar((secoundDigit / 10) + 48);

					if (firstDigit != 98 || secoundDigit != 99)
					{
						putchar(',');
						putchar(' ');
					}
			}
		secoundDigit++;
	}
	firstDigit++:
}
putchar('\n');

return (0);
}
