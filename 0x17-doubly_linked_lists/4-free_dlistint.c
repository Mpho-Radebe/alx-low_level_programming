#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees the list
 * @head: head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *d_node = NULL;

	while (head != NULL)
	{
		d_node = head;
		free(d_node);
		head = head->next;
	}
}

