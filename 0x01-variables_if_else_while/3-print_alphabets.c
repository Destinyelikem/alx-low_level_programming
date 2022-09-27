#include <stdio.h>
/**
 * main - Print the alphabet in lowercase, and then in uppercase
 *
 * Return: Always 0
 */
int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		++lower;
	}
	while (upper <= 'Z')
	{
		putchar(upper);
		++upper;
	}
	putchar('\n');

	return 0;
}
