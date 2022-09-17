#include <stdio.h>
#include "main.h"
/**
 *print_square - function that prints a square, followed by a new line
 *@size: parameter
 *Return: Always 0
 */
void print_square(int size)
{
int inc1, inc2;
if (size > 0)
{
for (inc1 = 0; inc1 < size; inc1++)
{
for (inc2 = 0; inc2 < (size - 1); inc2++)
{
putchar('0');
}
putchar('#');
putchar('\n');
}
}
else
{
putchar('\n');
}
}
