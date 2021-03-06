#include "lists.h"

/**
 * get_nodeint_at_index - indexes a list
 * @head: the list
 * @index: index
 * Return: the element
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
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

