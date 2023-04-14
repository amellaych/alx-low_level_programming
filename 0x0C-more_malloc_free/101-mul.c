#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old: size allocated memory for ptr
 * @new: new size of the new memory
 *
 * Return: pointer to new allocated memory block
 */
void *_realloc(void *ptr, unsigned int old, unsigned int new)
{
	char *ptr1;
	char *old_ptr;
	unsigned int i;

	if (new == old)
		return (ptr);

	if (new == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new));

	ptr1 = malloc(new);
	if (!ptr1)
		return (NULL);

	old_ptr = ptr;

	if (new < old)
	{
		for (i = 0; i < new; i++)
			ptr1[i] = old_ptr[i];
	}

	if (new > old)
	{
		for (i = 0; i < old; i++)
			ptr1[i] = old_ptr[i];
	}

	free(ptr);
	return (ptr1);
}
