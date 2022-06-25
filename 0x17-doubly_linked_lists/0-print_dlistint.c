#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints doubly linked list
 * @h: head of the list
 * Return: the size of the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}

