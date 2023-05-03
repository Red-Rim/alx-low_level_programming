#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/*Red-Rim*/
/**
* print_listint_safe - prints a list
* @head: first node
* Return: the number of nodes
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	long int luna;
	size_t n;
	const listint_t *ama = NULL;
	const listint_t *nodes = NULL;

	while (head)

	ama = head;

	while (ama)
	{
		luna = head - head->next;
		printf("[%p] %d\n", (void *)ama, ama->n);
		i++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (luna > 0)
			head = head->next;
		else
		ama = ama->next;
		nodes = head;
		n = 0;

		while (n < i)
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
			if (ama == nodes)
			{
				printf("-> [%p] %d\n", (void *)ama, ama->n);
				return (i);
			}
			nodes = nodes->next;
			n++;
		}
		if (!head)
			exit(98);
	}

	return (i);
}
