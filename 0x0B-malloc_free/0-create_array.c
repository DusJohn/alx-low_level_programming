#include "main.h"
#include <stdlib.h>

/**
 * create_array - This function creates an array of chars and initializes it
 * with a specific char.
 *
 * @size: the size of the array of chars to be created.
 *
 * @c: char value to initialize the array with.
 *
 * Return: Pointer to the array created OR NULL if @size = 0 or the creation of
 * the array fails.
 */

char *create_array(unsigned int size, char c)
{
	char *cr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	cr = malloc(sizeof(c) * size);

	if (cr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		cr[i] = c;

	return (cr);
}
