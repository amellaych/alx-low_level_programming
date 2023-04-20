#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - using the pointer to print the name
 * @name: string to add
 * @f: pointer to sunction
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
