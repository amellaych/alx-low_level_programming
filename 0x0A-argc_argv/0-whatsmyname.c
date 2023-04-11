#include <stdio.h>
#include "main.h"

/**
 * main - Prints name of the program.
 * @argc: number of arguments passed to the program.
 * @argv: array of pointers to the arguments.
 *
 * Return: Always 0 (Success).
 */
int main(int argc _attribute_((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
