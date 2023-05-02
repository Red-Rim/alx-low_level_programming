#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/*Red-Rim*/
/**
 * pop_listint - that deletes the head node of a listint_t linked list
 * and returns the head node’s data (n)
 * @head: pointer to head node
 * Return:
 * the head node's data (n) or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *ama;
	int n;

	if (*head == NULL)
		return (0);

	ama = *head;
	*head = (*head)->next;
	n = ama->n;
	free(ama);

	return (n);
}
