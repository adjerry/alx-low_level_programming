#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *main - print multiplication of the number
 *@argc:count arguments
 *@argv:arguments vector
 *Return: 0 if true and 1 if false
 */
int main(int argc, char *argv[])
{
int a, b;
if (argc == 3)
{
a = atoi(argv[1]);
b = atoi(argv[2]);
printf("%d\n", a *b);
return (0);
}
printf("error\n");
return (1);
}
