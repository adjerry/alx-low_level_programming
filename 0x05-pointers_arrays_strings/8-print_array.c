#include <stdio.h>
#include "main.h"
/**
 *print_array -  function that prints n elements of an array
 *@a:arry
 *@n:number
 *Return:nothing
 */
void print_array(int *a, int n)
{
int inc;
int inc;
for (inc = 0; inc < n; inc++)
{
if (inc != n - 1)
printf("%d, ", a[inc]);
else
printf("%d", a[inc]);
}
putchar(10);
}
