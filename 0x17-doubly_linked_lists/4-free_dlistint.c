#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list
 * @head: head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *temp;

	current = head;

	while (current != NULL)
	{
	temp = current->next;
	free(current);
	current = temp;
	}
}
