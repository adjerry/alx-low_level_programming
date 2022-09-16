#include "main.h"

/**
 * _isdigit - function that checks for a digit 
 * @c: character that cheak digit or number
 * Return: Always 0.
 */

int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
{
return (1);
}
return (0);
}
