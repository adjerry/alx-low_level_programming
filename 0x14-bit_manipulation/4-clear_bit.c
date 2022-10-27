#include "main.h"
/**
 * clear_bit - function that sets the value of a bit
 * @n: pointer
 * @index: index of the bit
 * Return: 1 if it worked, -1 if it didn't
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int m;
if (index > 63)
return (-1);
m = 1 << index;
if (*n & m)
*n ^= m;
return (1);
}
