#include "lists.h"

/**
 * sum_listint - sums the integers in the list
 * @head: the list
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

