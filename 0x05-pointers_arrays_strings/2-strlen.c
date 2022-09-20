#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @: receives a string
 *
 * Return: o
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
