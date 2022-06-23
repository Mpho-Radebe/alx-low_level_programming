#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - pops
 * @head: the list
 * Return: popped element
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *delete_node;

	if (head != NULL && *head != NULL)
	{
		n = (*head)->n;
		delete_node = *head;
		*head = (*head)->next;
		free(delete_node);
		return(n);
	}
	return (0);
}

