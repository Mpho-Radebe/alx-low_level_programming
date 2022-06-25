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
	listint_t *next;
	listint_t *prev;

	if (head == NULL || *head  == NULL)
		return (NULL);

	if ((*head)->next == NULL)
		return (*head);

	next = (*head)->next;
	prev = *head;
	while (next != NULL)
	{
		(*head)->next = next->next;
		next->next = prev;
		prev = next;
		next = (*head)->next;
	}

	*head = prev;
	return (*head);
}
