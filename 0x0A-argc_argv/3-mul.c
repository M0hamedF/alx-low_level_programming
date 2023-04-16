#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
*/

int main(int argc, char **argv)
{
int x, y;

y = 0;
if (argc != 3)
{
printf("%s\n", "Error");
y = 1;
}
else
{
x = atoi(argv[1]) * atoi(argv[2]);
printf("%i\n", x);
}
return (y);
}
