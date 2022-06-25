#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint_ - adds an element into a list
 * @head: the list
 * @n: the element
 * Return: the new element
 */
listint_t *add_nodeint_(listint_t **head, const int n)
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
 * find - lookds if an element is in the list
 * @list: the list
 * @e: search element
 * Return: integer
 */
int find(listint_t *list, const int e)
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
 * print_listint_safe - prints a list
 * @head: the list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	int count = 0;
	listint_t *traversed = NULL;
	listint_t *delete_node;

	while (head != NULL)
	{
		if (find(traversed, (unsigned long)head))
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
		printf("[%p] %d\n", (void *)head, head->n);
		add_nodeint_(&traversed, (unsigned long)head);
		head = head->next;
		count++;
	}

	while (traversed != NULL)
	{
		delete_node = traversed;
		traversed = traversed->next;
		free(delete_node);
	}

	return (count);
}
