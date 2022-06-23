#include "lists.h"

/**
 * free_listint2 - deallocates memory used by a list
 * @head: the list
 */
void free_listint2(listint_t **head)
{
	free_listint(*head);
	*head = NULL;
}

