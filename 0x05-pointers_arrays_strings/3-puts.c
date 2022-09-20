#include "main.h"

/**
 * _puts - Prints a string folllowed by a new line
 *
 * @str: contains the string to be displayed
 *
 * Return: o
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
