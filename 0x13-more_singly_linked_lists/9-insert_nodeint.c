#include "lists.h"
/**
 * insert_nodeint_at_index - adds a new_node node to a linked list
 *                           at a given position
 * @head : pointer to the head of the list
 * @idx  : index of the list where the new_node node will be added
 *         (indices start at 0)
 * @n    : value for the new_node node to be added
 * Return: pointer to the new_node node,
 *         or NULL - if function fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *ptr = *head;
unsigned int node;

new_node = malloc(sizeof(listint_t));

if (new_node == NULL)
return (NULL);

new_node->n = n;

if (idx == 0)
{
new_node->next = ptr;
*head = new_node;
return (new_node);
}

for (node = 0; node < (idx - 1); node++)
{
if (ptr == NULL || ptr->next == NULL)
return (NULL);

ptr = ptr->next;
}

new_node->next = ptr->next;
ptr->next = new_node;

return (new_node);
}
