#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a linked list
 * @head: pointer to the head of the list
 * @n: number to be used as content
 *
 * Return: address of the newly added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *mirror = NULL;

	new_node = malloc(sizeof(listint_t));

	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
	}

	else

		return (NULL);

	if ((*head) == NULL)
	{
		(*head) = new_node;
		return (new_node);
	}

	mirror = (*head);
	mirror->next = (*head)->next;

	while (mirror->next != NULL)
	{
		mirror = mirror->next;
	}

	mirror->next = new_node;

	return (new_node);
}
