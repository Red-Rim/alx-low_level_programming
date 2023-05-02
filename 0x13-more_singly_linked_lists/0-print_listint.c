#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/*Red-Rim*/
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the head node of the list
 * Return: number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t awdi = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		awdi++;
		h = h->next;
	}
	return (awdi);
}
