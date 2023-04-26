#include "main.h"
/**
 * main - Prints the sum of all mutiples of 3 and 5 up to 1024
 * Return: Always (Success)
 */

int main(void)
{
	int i, z = 0;

	while (i < 1024)
	{
	if ((1 % 3 == 0) || (i % 5 == 0))
	{
	z += i;	
	}
	i++;
	}
	printf("%d\n", z);
	return (0);
}	
