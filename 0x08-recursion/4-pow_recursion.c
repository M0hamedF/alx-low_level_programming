#include "main.h"

/**
 * _pow_recursion - return value of x
 * @x: base numb
 * @y: power numb
 *Return: int
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	return (-1);
	else if (y == 0)
	return (1);
	return (x * _pow_recursion(x, y - 1));
}