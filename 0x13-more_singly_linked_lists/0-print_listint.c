#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/*Red-Rim*/
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the head node of the list
 * Return: the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		c++;
	}
	return (c);
}
