#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head of the list
 *
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
size_t count = 0;

while (h != NULL)
{
printf("[%u] ", h->len);
if (h->str != NULL)
printf("%s\n", h->str);
else
printf("(nil)\n");
count++;
h = h->next;
}
return (count);
}
