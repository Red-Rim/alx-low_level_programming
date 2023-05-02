#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/*Red-Rim*/
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the head of a linked list
 * @idx: index of the list where the new node should be add (starting at 0)
 * @n: data to be stored in the new node
 * Return: pointer to the new node, or NULL on failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *ama;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	ama = *head;

	for (i = 0; i < idx - 1 && ama != NULL; i++)
		ama = ama->next;

	if (ama == NULL)
	{
		free(new);
		return (NULL);
	}

	new->next = ama->next;
	ama->next = new;

	return (new);
}
