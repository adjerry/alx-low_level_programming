#include <stdio.h>
/**
 *main - entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
char lowercase;
for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
{
if (lowercase == 'e')
continue;
if (lowercase == 'q')
continue;

putchar(lowercase);
}
putchar('\n');
return (0);
}
