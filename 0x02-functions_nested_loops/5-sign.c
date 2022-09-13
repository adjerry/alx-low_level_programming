#include "main.h"
/**
 *print_sign - to cheak sign of the number
 *@n:is the int that will use the argument of the function
 *Return: Always 0.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
}
}
