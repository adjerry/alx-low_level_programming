#include "lists.h"
#include <stdio.h>
/**
 * pop_listint - delets the heads nodes
 * @head: pointer
 * Returns: head nodes data (n)
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int n;
temp = *head;
if (temp == NULL)
return (0);
*head = temp->next;
n = temp->n;
free(temp);
return (n);
}
