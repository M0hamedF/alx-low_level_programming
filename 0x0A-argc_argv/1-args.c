#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the number of arguments passed into it
 * @argc: count the number of paraetar
 * @argv: pointer to an array of an argujent
 * Return : 0
*/

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
