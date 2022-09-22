#include "main.h"
/**
 *leet - function that encodes a string into
 *@str:string to be encoded
 *Return:addrese of the encoded string
 */
char *leet(char *str)
{
int i = 0;
while (str[i] != '\0')
{
str[i] = transform(str[i]);
i++;
}
return (str);
}
/**
 *transform - heleper function to map a letter
 *@x:char to be encoded
 *Return: the encoded char
 */
char transform(char x)
{
char mapping_low[8] = {'0', '1', '\0', 'e', 'a', '\0', '\0', 't'};
char mapping_upper[8] = {'0', '1', '\0', 'E', 'A', '\0', '\0', 'T'};
int i = 0;
char replacement = x;
while (i < 8)
{
if (x == mapping_low[i] || x == mapping_upper[i])
{
replacement = i + '0';
break;
}
i++;
}
return (replacement);
}
