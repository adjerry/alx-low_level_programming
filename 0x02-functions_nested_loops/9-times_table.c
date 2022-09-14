#include "main.h"
/**
 *times_table -  a function that prints the 9 times table
 *
 *Return: Always 0
 */
void times_table(void)
{
int num, multi, produ;
for (num = 0; num <= 9; num++)
{
_putchar('0');
for (multi = 1; multi <= 9; multi++)
{
_putchar(',');
_putchar(' ');
}
produ = num * multi;
if (produ <= 9)
_putchar(' ');
else
_putchar((produ / 10) + '0');
_putchar((produ % 10) + '0');
}
_putchar('\n');
}
