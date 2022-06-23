#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index_ - indexes a list
 * @head: the list
 * @index: index
 * Return: the element
 */
listint_t *get_nodeint_at_index_(listint_t *head, unsigned int index)
{
	while (head != NULL)
	{
		if (index == 0)
			return (head);
		head = head->next;
		index--;
	}
	return (NULL);
}

/**
 * delete_nodeint_at_index - deletes node at the given index
 * @head: the list
 * @index: the index
 * Return: removed element
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *before_node = NULL;
	listint_t *delete_node = NULL;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		delete_node = *head;
		*head = (*head)->next;
	}
	else
	{
		before_node = get_nodeint_at_index_(*head, index - 1);
		if (before_node != NULL)
		{
			delete_node = before_node->next;
			if (before_node->next != NULL)
				before_node->next = before_node->next->next;
		}
	}

	if (delete_node != NULL)
	{
		free(delete_node);
		return (1);
	}
	else
	{
		return (-1);
	}
}