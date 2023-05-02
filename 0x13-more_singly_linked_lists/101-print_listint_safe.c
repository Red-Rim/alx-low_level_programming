#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/*Red-Rim*/
/**
 * print_listint_safe -  prints a listint_t linked list
 * @head: first node
 * Return: numb of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	const listint_t *addresses[1024];
	size_t c = 0;

	while (current != NULL)
	{
			printf("[%p] %d\n", (void *)current, current->n);
	addresses[c] = current;
	c++;
	if (c >= 1024)
	{
		fprintf(stderr, "Error: list too long\n");
		exit(98);
	}
	current = current->next;
	for (size_t i = 0; i < c; i++)
	{
		if (current == addresses[i])
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			return (c);
		}
	}
	}

	return (c);
}
