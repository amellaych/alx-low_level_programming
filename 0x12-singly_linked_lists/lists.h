#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct list_s - linked list
 * @str: string - (malloc'ed string)
 * @len: length string
 * @next: points to next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;

/* Function prototypes */
size_t print_list(const list_t *h);

#endif
