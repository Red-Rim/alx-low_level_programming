#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/*Red-Rim*/
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: first node
 * Return: numb of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t gang = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		gang++;
	}
	return (gang);
}
