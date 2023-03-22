#include "main.h"

/**
 * _islower - function to check
 * if the charcter lowercase
 *
 * 0c: check input of function
 *
 * Return: return 1 if 'c' is lowercase
 * otherwise return 0
 *
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	return (1);
	return (0);
}
