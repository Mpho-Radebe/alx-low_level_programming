#include "lists.h"

/**
 * free_listint - deallocates memory for a list
 * @head: list
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
	{
		free_listint(head->next);
		free(head);
	}
}

