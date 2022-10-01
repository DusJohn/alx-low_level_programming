#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: This program adds positive numbers and prints the result
 *
 * @argc: length of @argv
 *
 * @argv: array of strings of the arguments of this program
 *
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int result = 0, num, i, j, k;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
			printf("%s\n", "Error");
			return (1);
			}
		}
	}

	for (k = 1; k < argc; k++)
	{
		num = atoi(argv[k]);
		result += num;
	}
	printf("d\n", result);
	return (0);
}
