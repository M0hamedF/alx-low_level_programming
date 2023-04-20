#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
 * main - check the code for Holberton School students.
 * @argc: number of args
 * @argv: pointers to string args
 * Return: Always 0 on success
 */
int main(int argc, char **argv)
{
	char *mainaddr;
	int i;
	int j;

if (argc != 2)
{
printf("Error\n"), exit(1);
}

j = atoi(argv[1]);

if (j < 0)
	printf("Error\n"), exit(2);

mainaddr = (char *)main;

for (i = 0; i < bytes - 1; i++)
	printf("%02hhx ", mainaddr[i]);

printf("%02hhx\n", mainaddr[i]);

return (0);
}
