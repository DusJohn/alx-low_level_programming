#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 *
 * Description: This program multiplies two numbers.
 *
 * @argc: length of @argv.
 *
 * @argv: array of strings of the arguments of this program.
 *
 * num1: first number.
 *
 * num2: second number.
 *
 * result: result of multiplication.
 *
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
