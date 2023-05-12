#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int k, m, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	k = atoi(argv[1]);
	result = 0;

	if (k < 0)
	{
		printf("0\n");
		return (0);
	}

	for (m = 0; m < 5 && k >= 0; m++)
	{
		while (k >= coins[m])
		{
			result++;
			k -= coins[m];
		}
	}

	printf("%d\n", result);
	return (0);
}

