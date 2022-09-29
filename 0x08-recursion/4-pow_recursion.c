#include "main.h"

/**
 * _pow_recursion - This func returns the value of x raised to the power of y
 *
 * @x: an integer
 *
 * @y: integer which is also the exponent of x
 *
 * Return: value of the @x when it is raised to the power of @y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
