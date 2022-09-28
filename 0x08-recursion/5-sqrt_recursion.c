#include "main.h"
/**
 *_evaluate - evaluat function sqt
 *@i:integ
 *@n:integer
 *Return:evaluat sqrt
 */
int _evaluate(int n, int i)
{
if (n == 0 || n == 1)
return (n);
else if (i * i < n)
return (_evaluate(i + 1, n));
else if (i * i == n)
return (i);
return (-1);
return (-1);
}
