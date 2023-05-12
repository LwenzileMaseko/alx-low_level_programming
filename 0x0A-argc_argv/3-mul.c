#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int k, m, l, len, f, digit;

	k = 0;
	m = 0;
	l = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (k < len && f == 0)
	{
		if (s[k] == '-')
			++m;

		if (s[k] >= '0' && s[k] <= '9')
		{
			digit = s[k] - '0';
			if (m % 2)
				digit = -digit;
			l = l * 10 + digit;
			f = 1;
			if (s[k + 1] < '0' || s[k + 1] > '9')
				break;
			f = 0;
		}
		k++;
	}

	if (f == 0)
		return (0);

	return (l);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}

