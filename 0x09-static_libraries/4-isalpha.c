#include "main.h"
/**
 *_isalpha - function to cheak lower or upper character
 *@c: is the int that will use argumen of the function
 *Return: Always 0.
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
return (0);
}
