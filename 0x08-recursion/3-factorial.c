#include "main.h"

/**
 * factorial - This function returns the factorial of a number
 *
 * @n: The inputted number
 *
 * Return: factorial of the number
 */

int factorial(int n)
{
	if (n == 1)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
