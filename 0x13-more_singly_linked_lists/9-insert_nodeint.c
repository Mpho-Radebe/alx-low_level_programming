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
 * insert_nodeint_at_index - inserts a node at given index
 * @head: the list
 * @idx: the index
 * @n: the new lement
 * Return: the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *before_node = NULL;

	if (new_node != NULL)
	{
		new_node->n = n;
		if (idx == 0)
		{
			new_node->next = *head;
			*head = new_node;
		}
		else
		{
			before_node = get_nodeint_at_index_(*head, idx - 1);
			if (before_node == NULL)
			{
				free(new_node);
				new_node = NULL;
			}
			else
			{
				new_node->next = before_node->next;
				before_node->next = new_node;
			}
		}
	}

	return (new_node);
}

