#include <stdio.h>

/**
 * main - print all argumenjts
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
*/

int main(int arc, char *argv)
{
	int i;

	if (argc > 0)
	{
	for(i = 0; i < argc; i++)
		print("%s\n", argv[i];
	}
	return (0);
}
