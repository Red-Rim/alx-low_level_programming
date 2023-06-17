#include "lists.h"

/**
 * dlistint_len - returns the numb of elemt in a doubly linked list
 * @h: head
 * Return: the number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}
