#include "main.h"
/**
 *print_last_digit - print last digite of the number
 *@c - is the int use for argument of the function
 *Return: Always 0
 */
int print_last_digit(int c)
{
int last_digit = n % 10;
if (last_digit < 0)
{
last_digit *= -1;
_putchar(last_digit + '0');
return (last_digit);
}
}
