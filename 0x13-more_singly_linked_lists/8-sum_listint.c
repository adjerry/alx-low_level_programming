#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - calculates the summ of all data
 * @head: pointer
 * Return: sum of all data
 */
int sum_listint(listint_t *head)
{
int add;
add = 0;
while (head)
{
add += head->n
head = head->next
}
return (add);
}
