#include "main.h"
#include <stdlib.h>

/**
 * _strdup - This function returns a pointer to a newly allocated space in
 * memory which contains a copy of the string given as parameter.
 *
 * @str: the string.
 *
 * Return: a pointer to the duplicated string OR NULL if @str = NULL, or if
 * insufficient memory is available.
 */

char *_strdup(char *str)
{
	char *alloc_mem;
	unsigned int i;
	unsigned int length_of_string = 0;

	if (str == NULL)
		return ('\0');

	while (*(str + length_of_string) != '\0')
		length_of_string++;

	length_of_string++;

	alloc_mem = malloc(sizeof(*str) * length_of_string);

	if (alloc_mem == NULL)
		return ('\0');

	for (i = 0; i < length_of_string; i++)
		alloc_mem[i] = *(str + i);

	alloc_mem[i] = '\0';

	return (alloc_mem);
}
