#include "main.h"
#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143.
 * Return: Always 0 (success)
 */
int main(void)
{
	long prime = 612852475143, div;

	while (div < (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			prime /= 2;
		}
		for (div = 3; div < (prime / 2); div += 2)
		{
			if ((prime % div) == 0)
			{
				ptime /= div;
			}
		}
	}printf("%d\n", prime);
	return (0);
}
