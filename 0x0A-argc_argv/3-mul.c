#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
*/

nt main(int argc, char * argv[])
{
int x;
 	if (argc != 3)
{
	printf("Error\n");
		return (1);
}
else
{
		num1 = _atoi(argv[1]);
num2 = _atoi(argv[2]);
result = num1 * num2;

	printf("%d\n", result);

	return (0)
}
