#include "lists.h"
#include <stdlib.h>

/*Red-Rim*/
/**
 * free_list - Write a function that frees a list_t list
 * @head: list_t to be freed
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
