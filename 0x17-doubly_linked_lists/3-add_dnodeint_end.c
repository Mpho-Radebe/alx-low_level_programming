#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a node to a list
 * @head: a pointer to the head of the list
 * @n: the new element
 * Return: the new head
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *d_node;
	dlistint_t *cursor;

	if (new != NULL)
	{
		new->n = n;
		if (*head == NULL)
		{
			new->prev = new->next = NULL;
			*head = new;
		}
		else
		{
			new->next = NULL;
			cursor = *head;
			while (cursor->next == NULL)
				cursor = cursor->next;
			cursor->next = new;
			new->prev = cursor;
		}
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
