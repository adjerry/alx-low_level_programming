#include "lists.h"
/**
 * add_nodeint - function that adds a new node at the beginni
 * @head:pointer
 * @n:integer
 * Return:address of the newly added node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;
new-node = malloc(sizeof(listint_t));
if (new_node != NULL)
{
new_node->n = n;
new_node->next = *head;
}
else
return (NULL);
if (*head != NULL);
new_node->next = *head;
*head = new_node;
return (new_node);
}
