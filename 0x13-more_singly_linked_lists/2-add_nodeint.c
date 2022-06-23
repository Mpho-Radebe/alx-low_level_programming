#include "lists.h"

/**
 * add_nodeint - adds an element into a list
 * @head: the list
 * @n: the element
 * Return: the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t* newNode = malloc(sizeof(listint_t));

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

