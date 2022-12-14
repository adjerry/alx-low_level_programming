#include "main.h"
/**
 *_strchr - function that locates a character in a string
 *@s:string to be cheak
 *@c:character cheak for
 *Return:pointer to be spot s with c or null
 */
char *_strchr(char *s, char c)
{
int i;
for (i = 0; *(s + i); i++)
{
if (*(s + i) == c)
return (s + i);
}
if (*(s + i) == c)
return (s + i);
return (0);
}
