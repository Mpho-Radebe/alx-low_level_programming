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
	listint_t *left = *head;
	listint_t *right = *head;
	listint_t *temp_ptr = NULL;
	int temp;

	if (head == NULL || *head == NULL)
		return (NULL);

	while (right->next != NULL)
		right = right->next;
	while (right != left && right->next != left)
	{
		temp = right->n;
		right->n = left->n;
		left->n = temp;

		left = left->next;

		temp_ptr = *head;
		while (temp_ptr->next != right)
			temp_ptr = temp_ptr->next;
		right = temp_ptr;
	}

	return *head;
}

