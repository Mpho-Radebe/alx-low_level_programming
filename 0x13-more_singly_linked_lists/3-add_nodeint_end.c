#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: the list
 * @n: new node
 * Return: new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *tail = NULL;	

	if (newNode != NULL)
	{
		newNode->n = n;
		newNode->next = NULL;
		
		if (*head = NULL)
			*head = newNode;
		else
		{
			tail = *head;
			while (tail->next != NULL)
				tail = tail->next;
			tail->next = newNode;
		}

		return (newNode);
	}
	else
	{
		return (NULL);
	}
}

