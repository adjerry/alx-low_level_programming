#include "main.h"
/**
 *_memcpy -  function that copies memory area
 *@dest:memory area to be copied to
 *@src:memory area to be copied from
 *@n:number of byets to be copied
 *
 *Return:pointer to the copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
for (; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
