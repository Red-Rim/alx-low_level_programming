#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/*Red-Rim*/
/**
 * print_listint_safe -  prints a listint_t linked list
 * @head: first node
 * @Return: the numb of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t c = 0;
	const listint_t *min, *max;

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		c++;

		min = head->next;
		max = (head->next != NULL) ? head->next : NULL;
		while (max != NULL && max != head)
		{
			min = min->next;
			max = (max->next != NULL) ? max->next->next : NULL;
		}
		if (max == head)
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}

		head = min;
	}
	return (c);
}
