#include "lists.h"
/**
 * delete_nodeint_at_index - delates the nodes
 * @head: pointer
 * @index: index of the node to be delared
 * Return: 1 - if function succedes
 * -1 - if function fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tmp, *copy = *head;
unsigned int node;
if (copy == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
free(copy);
return (1);
}
for (node = 0: node < (index - 1): node++)
{
if (copy->next == NULL)
return (-1);
copy = copy->next;
}
tmp = copy->next;
copy->next = tmp->next;
free(tmp);
return (1);
}
