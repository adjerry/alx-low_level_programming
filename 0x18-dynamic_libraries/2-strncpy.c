#include "main.h"
/**
 *_strncpy - a function that copies a string
 *@dest:storing the string copyes
 *@src:the source of string
 *@n:number of byet copied
 *Return:return
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for ( ; i < n; i++)
dest[i] = '\0';
return (dest);
}
