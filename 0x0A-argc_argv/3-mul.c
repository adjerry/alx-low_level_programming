#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *main - print the name of the program
 *@argc: count arguments
 *@argv: arguments
 *Return:0 if true and 1 if false
 */
int main(int argc, char *argv[])
{
int a, b;
if (argc == 1)
{
a = atoi(argv[1]);
b = atoi(argv[2]);
printf("%i\n", a *b);
return (0);
}
printf("srror\n");
return (1);
}
