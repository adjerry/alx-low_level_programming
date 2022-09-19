#include "main.h"
/**
 *swap_int - function that swaps the values of two integers.
 *@a:parameter
 *@b:parameter
 *return:nothing
 */
void swap_int(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}
