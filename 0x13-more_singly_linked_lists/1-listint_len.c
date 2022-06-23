#include "lists.h"

/**
 * listint_len - counts the number of elements in a list
 * @h: the list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != 0)
	{
		count++;
		h = h->next;
	}

	return (count);
}

