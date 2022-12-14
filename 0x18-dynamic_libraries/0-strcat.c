#include "main.h"
/**
 *_strcat - function that concatenates two strings
 *@dest:string will be appended
 *@src:string will be concatenated
 *Return:a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
int index = 0, dest_len = 0;
while (dest[index++])
dest_len++;
for (index = 0; src[index]; index++)
dest[dest_len++] = src[index];
return (dest);
}
