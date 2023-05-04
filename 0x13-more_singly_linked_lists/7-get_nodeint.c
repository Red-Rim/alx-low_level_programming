#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/*Red-Rim*/
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the head node of the list
 * @index: index of the node to be returned
 * Return:
 * if successful, pointer to the requested node otherwise, NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = head;

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	return (i == index ? current : NULL);
}
