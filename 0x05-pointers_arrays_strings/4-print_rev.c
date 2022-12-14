#include "main.h"

/**
 * print_rev - prints a string in reverse and adds a new line
 *
 * @s: An input string
 *
 * Return: 0;
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
