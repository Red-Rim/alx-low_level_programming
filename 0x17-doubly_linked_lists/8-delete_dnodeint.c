#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes nodes given index of a dlistint_t list
 * @head: head
 * @index: Index, starting from 0
 *
 * Return: 1, or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
	return (-1);

	current = *head;

	if (index == 0)
	{
	*head = (*head)->next;
		if (*head != NULL)
		(*head)->prev = NULL;
	free(current);
	return (1);
	}

	while (current != NULL && count < index - 1)
	{
	current = current->next;
	count++;
	}

	if (current == NULL || current->next == NULL)
	return (-1);

	temp = current->next;
	current->next = temp->next;

	if (temp->next != NULL)
	temp->next->prev = current;

	free(temp);
	return (1);
}
