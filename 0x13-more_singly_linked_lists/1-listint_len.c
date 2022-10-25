#include "lists.h"
/**
 * listint_len -  function that returns the number of element
 * @h: head of the list
 * Return: the number of element
 */
size_t listint_len(const listint_t *h)
{
const listint_t *cursor = h;
size_t count = 0;
while (cursor != NULL)
{
count += 1;
cursor = cursor->next;
}
return (count);
}
