#include <stdio.h>

/**
 * main - a program that prints the name of the file it was compiled from
 * Description: prints the name of the file
 * Return: 0
*/

int main (void)
{
	printf("%s\n", __FILE__);
	return (0);
}
