#include "main.h"

/**
 * _strlen - Function that returns the length of a string
 *
 * @s: this is the input string
 *
 * Return: Lenngth of thr string
 */
int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] != '\0' ; index++);

	return (index);
}
