#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a node
 * @h: the head of the list
 * @idx: the index
 * @n: new element
 * Return: the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *head;
	dlistint_t *new;

	if (h == NULL || *h == NULL)
		return (NULL);

	head = *h;
	for (i = 0; i < idx; i++)
	{
		if (head == NULL)
			break;
		head = head->next;
	}

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		head = *h;
		while (head->next != NULL)
		{
			if (head->prev != NULL)
				free(head->prev);
			head = head->next;
		}
		free(head);
		return (NULL);
	}
	new->n = n;
	new->next = head;
	new->prev = head->prev;
	head->prev = new;

	if (new->prev != NULL)
		new->prev->next = new;
	else
		*h = new;

	return (new);
}

