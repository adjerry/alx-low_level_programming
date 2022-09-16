#include <stdio.h>
#include "main.h"
 /**
  *print_most_numbers - function that prints the numbers
  *return: nothing return
  */
void print_most_numbers(void)
{
int n;
for (n = 0; n < 58; n++)
{
if ((n == 50) || (n == 52))
{
continue;
}
putchar(n);
}
putchar(10);
}
