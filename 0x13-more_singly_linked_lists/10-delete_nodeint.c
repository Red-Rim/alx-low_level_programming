#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/*Red-Rim*/
/**
 * delete_nodeint_at_index - deletes node at index of a listint_t linked list
 * @head: pointer to the first element of a linked list
 * @index: index of the node to be deleted
 * Return: 1 if it succeeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *oki;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;
	oki = NULL;


	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	for (i = 0; i < index && current != NULL; i++)
	{
		oki = current;
		current = current->next;
	}

	if (current == NULL)
		return (-1);

	oki->next = current->next;
	free(current);

	return (1);
}
