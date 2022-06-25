#include "lists.h"

/**
 * dlistint_len - the length of a list
 * @h: head of the list
 * Return: the size of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
