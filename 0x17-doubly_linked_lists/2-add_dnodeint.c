#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds a node to a list
 * @head: a pointer to the head of the list
 * @n: the new element
 * Return: the new head
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *d_node;
	dlistint_t *cursor;

	if (new != NULL)
	{
		new->n = n;
		new->prev = NULL;
		new->next = *head;
		if (*head != NULL)
			(*head)->prev = new;
		*head = new;
	}
	else
	{
		cursor = *head;
		while (cursor != NULL)
		{
			d_node = cursor;
			cursor = cursor->next;
			free(d_node);
		}
		*head = NULL;
	}

	return (*head);
}
