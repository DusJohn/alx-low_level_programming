#include "main.h"

/**
 * *_strcpy - copies the string pointed to by pointer 'src'
 * to the buffer pointed to by 'dest'
 *
 * @src: char type string
 *
 * @dest: char typr string
 *
 * Return: Pointter to 'dest'
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
