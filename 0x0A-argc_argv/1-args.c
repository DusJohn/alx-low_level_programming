#include <stdio.h>

/**
 * main - This function prints the number of arguments passed into it.
 *
 * @argc: length of @argv
 *
 * @argv: array of strings of the program's arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", --argc);
	return (0);
}
