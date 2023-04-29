#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - node at the end of a list_t list
 * @head: pointer to a pointer to the head list
 * @str: string
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *current;

if (!head || !str)
return (NULL);

new_node = malloc(sizeof(*new_node));
if (!new_node)
return (NULL);

new_node->str = strdup(str);
if (!new_node->str)
{
free(new_node);
return (NULL);
}

new_node->len = strlen(str);
new_node->next = NULL;

if (*head == NULL)
*head = new_node;
else
{
current = *head;
while (current->next)
current = current->next;
current->next = new_node;
}

return (new_node);
}
