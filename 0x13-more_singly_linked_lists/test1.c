#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/*Red-Rim*/
/**
 * looped - counts the numb of unique nodes in a looped linked list
 * @head: pointer to the head of the listint_t to check
 * Return: if the list is not looped - 0
 * otherwise - the numb of unique nodes in the list
 */
size_t looped(const listint_t *head)
{
	const listint_t *awdi, *luna;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	awdi = head->next;
	luna = (head->next)->next;

	while (luna)
	{
		if (awdi == luna)
		{
			awdi = head;
			while (awdi != luna)
			{
				nodes++;
				awdi = awdi->next;
				luna = luna->next;
			}

			while (awdi != luna)
			{
				nodes++;
				awdi = awdi->next;
			}

			return (nodes);
		}

		awdi = awdi->next;
		luna = (luna->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe -  prints a listint_t linked list
 * @head: first node
 * Return: numb of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, c = 0;

	nodes = looped(head);

	if (nodes == 0)
	{
	for (; head != NULL; nodes++)
		{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		}
	}
	else
	{

	for (c = 0; c < nodes; c++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
