#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the end
 * @head: pointer
 * @n: number to be used
 * Return: addeess of the newly added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node;
listint_t *cursor = *head;
new_node = malloc(sizeof(listint_t));
if (new_node != NULL)
{
new_node->n = n;
new_node->next = NULL;
}
else
return (NULL);
if (cursor != NULL)
{
while (cursor->next != NULL)
cursor-> = new_node;
}
else
*head = new_node;
return (new_node);
}
