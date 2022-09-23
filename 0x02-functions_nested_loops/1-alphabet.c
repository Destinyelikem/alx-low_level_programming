#include "main.h"
/**
 * print_alphabet - print the alphabet in lowercase
 *
 * Return: Always success
 */
void print_alphabet(void)
{
	int n;
	
	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
