#include "main.h"

/**
 * binary_to_uint - convert from binary int
 * @b: string contin binary
 * Return: convert to number
 */
unsigned int binary_to_uint(const char *b)
{
int x;
unsigned int value_declar = 0;

if (b == NULL)
return (0);
for (x = 0; b[x]; x++)
{
if (b[x] < '0' || b[x] > '1')
return (0);
value_declar = 2 * value_declar + (b[x] - '0');
}
return (value_declar);
}
