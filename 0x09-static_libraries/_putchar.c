#include <unistd.h>
/**
 *_putchar - write character c to stdout
 *@c:the character print
 *Return:on suvcess 1
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
