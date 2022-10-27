#include "main.h"
/**
 * flip_bits - function that returns the number of bits
 * @n: num 1
 * @m: num 2
 * Return: num of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int nbits;
for (nbits = 0; n || m; n >>= 1, m >>= 1)
{
if ((n & 1) != (m & 1))
nbits++;
}
return (nbits);
}
