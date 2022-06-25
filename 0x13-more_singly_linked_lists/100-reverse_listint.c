#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * reverse_listint - reverses the a list
 * @head: the list
 * Return: the new head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = (*head)->next;
	listint_t *prev = *head;
	listint_t *next_next;

	if (head == NULL || *head  == NULL)
		return (NULL);

	if ((*head)->next == NULL)
		return (*head);

	while (next != NULL)
	{
		next_next = next->next;
		next->next = prev;
		prev = next;
		next = next_next;
	}

	(*head)->next = NULL;
	*head = prev;
	return (*head);
}
