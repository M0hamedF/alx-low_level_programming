#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * main - program that prints the opcodes of its own main function
 * @argc: Counts the number of parameters
 * @argv: Pointer of array of pointers
 * Return: 0
 */

int main(int argc, char **argv)
{
	int n;
	int i;

if (argc != 2)
{
	printf("Error\n");
	exit(1);
}
n  = atoi(argv[1]);
if (n < 0)
{
	printf("Error\n");
	exit(2);
}
for (i = 0; i < n; i++)
{
	printf("%02hhx", ((char *)main)[i]);
	if (i != (n - 1))
		printf(" ");
	else
	printf("\n");
}
return (0);
}
