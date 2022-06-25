#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint__ - adds an element into a list
 * @head: the list
 * @n: the element
 * Return: the new element
 */
listint_t *add_nodeint__(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode != NULL)
	{
		newNode->n = n;
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	else
	{
		return (NULL);
	}
}

/**
 * find_ - lookds if an element is in the list
 * @list: the list
 * @e: search element
 * Return: integer
 */
int find_(listint_t *list, const int e)
{
	while (list != NULL)
	{
		if (list->n == e)
			return (1);
		list = list->next;
	}

	return (0);
}


/**
 * free_listint_safe - deallocates a list
 * @h: the list
 * Return: the size of the list that was deallocated
 */
size_t free_listint_safe(listint_t **h)
{
	int count = 0;
	listint_t *traversed = NULL;
	listint_t *delete_node;
	listint_t *head;

	if (h == NULL)
		return (0);

	head = *h;

	while (head != NULL)
	{
		if (find_(traversed, (unsigned long)head))
			break;
		add_nodeint__(&traversed, (unsigned long)head);
		delete_node = head;
		head = head->next;
		free(delete_node);
		count++;
	}

	while (traversed != NULL)
	{
		delete_node = traversed;
		traversed = traversed->next;
		free(delete_node);
	}

	*h = NULL;

	return (count);
}
