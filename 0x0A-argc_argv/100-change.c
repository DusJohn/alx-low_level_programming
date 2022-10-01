#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: This program prints the minimum number of coins to make change
 * for an amount of money
 *
 * @argc: length of @argv
 *
 * @argv: array of strings which are arguments of this program
 *
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int cents, ncoins = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		ncoins += 1;
	}
	printf("%d\n", ncoins);
	return (0);
}

