#include "main.h"
/**
 * positive_or_negative -program determine numbers
 * @i: input
 * Return: Always 0 (Success)
 */
void positive_or_negative(int i)
{
if (i > 0)
{
printf("%d is positive\n", i);
}
if (i < 0)
{
printf("%d is negative\n", i);
}
if (i == 0)
{
printf("%d is zero\n", i);
}
}
