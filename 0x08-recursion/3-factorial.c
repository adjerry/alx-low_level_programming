#include "main.h"
/**
 *factorial - factorialof a given number
 *@n: pointer block
 *Return: factorial
 */
int factorial(int n)
{
if (n == 0)
return (1);
else if (n < 0)
return (-1);
else
return (n * factorial(n - 1));
}
