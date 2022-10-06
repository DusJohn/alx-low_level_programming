#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -This function allocates memory using malloc.
 *
 * @b: The size of memory to be allocated.
 *
 * Return: pointer to the allocated memory (SUCCESS) or 98 if insufficient
 * memory was available (FAILURE)
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
