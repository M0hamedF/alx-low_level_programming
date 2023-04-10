#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it
 * @argc: count the number that goes into main
 * @argv: list
 * Return: 0
*/

int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
