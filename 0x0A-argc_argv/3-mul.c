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
int n, ex;

ex = 0;
if (argc != 3)
{
printf("%s\n", "Error");
ex = 1;
}
else
{
n = atoi(argv[1]) * atoi(argv[2]);
printf("%i\n", n);
}
return (ex);
}
