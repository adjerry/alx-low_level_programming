#include "main.h"
/**
 *void jack_bauer - function that prints every minute of the day of Jack Bauer
 *starting from 00:00 to 23:59.
 *Return: Always 0
 */
void jack_bauer(void)
{
int hours = 0;
int mins = 0;
int hours-remander;
int mins-remander;
while (hours <= 23)
{
while (mins <= 59)
{
mins-remander =  mins % 10;
hours-remander = hours % 10;
_putchar(hours / 10 + '0');
_putchar(hours-remander + '0')
_putchar(':');
_putchar(mins / 10 + '0');
_putchar(mins-remander + '0');
mins++;
_putchar('\n');
}
hours++;
mins = 0;
}
}
