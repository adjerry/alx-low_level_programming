#include "main.h"
/**
 * _isdigit - function that checks for a digit 
 *@c: number that cheak
 *Return: Always 0.
 */
int _isdigit(int c);
{
if ((c >= 48) && (c <= 57))
{
return (1);
}
return (0);
}
