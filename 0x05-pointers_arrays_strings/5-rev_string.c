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
while (*(str + i) != '\0')
{
if (i % 2 == 0)
putchar(*(str + i));
i++;
}
putchar(10);
}
