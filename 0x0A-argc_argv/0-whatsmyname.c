#include <stdio.h>

/**
 * main - This function prints the name of the program.
 *
 * @argc: This is the number of arguments passed in argv.
 *
 * @argv: This is an array of commands listed.
 *
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
