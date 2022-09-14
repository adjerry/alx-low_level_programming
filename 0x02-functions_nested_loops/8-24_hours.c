#include "main.h"
/**
 *void jack_bauer - function that prints every minute of the day of Jack Bauer
 *starting from 00:00 to 23:59.
 *Return: Always 0
 */
void jack_bauer(void)
{
int hours = 0;
int minutes = 0;
int hours-remander;
int mins-remander;
while (hours <= 23)
{
while (minutes <= 59)
{
hours-remander = hours % 10;
_putchar(hours / 10 + '0');
_putchar(':');
mins-remander =  minutes % 10;
_putchar(minutes / 10 + '0');
minutes++;
_putchar('\n');
}
hours++;
minutes = 0;
}
}
