#include <stdio.h>
#include "main.h"
/**
 *rev_string - function that reverses a string
 *@s:string
 *Return:nothing
 */
void rev_string(char *s)
{
int i = 0;
while (*(s + i) != '\0')
{
if (i % 2 == 0)
putchar(*(s + i));
i++;
}
putchar(10);
}
