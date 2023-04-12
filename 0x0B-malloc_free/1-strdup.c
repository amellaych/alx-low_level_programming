#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: pointer to duplicated string
 */
char *_strdup(char *str)
{
	char *dup;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	/* Get the length of the input string */
	while (str[len] != '\0')
		len++;

	/* Allocate memory for the duplicated string */
	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	/* Copy the characters from the input string to the duplicated string */
	for (i = 0; str[i]; i++)
		dup[i] = str[i];

	return (dup);
}
