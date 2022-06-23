#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - deallocates memory for a list
 * @head: list
 */
void free_listint_(listint_t *head)
{
	if (head != NULL)
	{
		free_listint(head->next);
		free(head);
	}
}

/**
 * free_listint2 - deallocates memory used by a list
 * @head: the list
 */
void free_listint2(listint_t **head)
{
	free_listint_(*head);
	*head = NULL;
}

