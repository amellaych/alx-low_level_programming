#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: A pointer to the head node of the list.
 * @index: The index of the node to return.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - The nth node of the list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;
listint_t *temp;

if (head == NULL)
return (NULL);

temp = head;
for (i = 0; i < index; i++)
{
temp = temp->next;
if (temp == NULL)
return (NULL);
}

return (temp);
}
