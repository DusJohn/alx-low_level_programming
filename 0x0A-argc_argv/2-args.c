#include <stdio.h>

/**
 * main - This program prints all the arguments it receives.
 *
 * @argc: lenght of @argv.
 *
 * @argv: array of strings of the arguments of this program
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
