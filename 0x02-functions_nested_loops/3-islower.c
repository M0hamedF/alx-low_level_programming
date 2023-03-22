#include "main.h"

/**
 * _islower - function to check 
 * if the charcter lower
 *
 * 0c: check input
 *
 * Return: return 1 if itis lower
 * otherwise return 0
 *
*/

int _islower(int c)
{
	if (c >= 97 && c<= 122)
		return (1);
	return (0);
}
