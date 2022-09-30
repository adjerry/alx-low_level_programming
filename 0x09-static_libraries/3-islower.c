#include "main.h"
/**
 *_islower - function to cheak lower character
 *@c: is the int that will use argumen of the function
 *
 *Return: Always 0.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
return (0);
}
