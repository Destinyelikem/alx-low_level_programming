#include <stdio.h>
/**
 * main - write a program that prints its name followed by a new line
 * if you rename the program, it will print the new name without havng to
 * compile it again
 * you sshould not remove the path before the name of the program
 *
 * @argc: this is the argument count
 * @argv: this is the argument vector
 *
 * Return: this return to 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
