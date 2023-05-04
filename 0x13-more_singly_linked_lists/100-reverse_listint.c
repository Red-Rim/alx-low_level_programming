#include "lists.h"
#include <stdio.h>
#include <stdio.h>

/*Red-Rim*/
/**
 * reverse_listint - a function that reverses a listint_t linked list
 * @head: pointer to the head of the listint_t list
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *mmm = NULL, *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = mmm;
		mmm = *head;
		*head = next;
	}

	*head = mmm;
	return (*head);
}
