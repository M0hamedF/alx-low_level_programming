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
	printf("%s\n", "Error");
}
else
{
	x = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", x);
}
return (1);
}
