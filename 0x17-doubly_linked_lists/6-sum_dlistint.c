#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all data (n) of a dlistint_t linked list
 * @head: head
 *
 * Return: Sum of all data, or 0
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
	sum += current->n;
	current = current->next;
	}

	return (sum);
}
