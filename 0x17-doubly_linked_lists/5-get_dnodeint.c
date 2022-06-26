#include "lists.h"
/**
 * get_dnodeint_at_index - get the node at given index
 * @head: head of the list
 * @index: the index
 * Return: the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			break;
		head = head->next;
	}

	return (head);
}

