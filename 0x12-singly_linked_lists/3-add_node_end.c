#include <string.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_node_end - adds an element at the end of the list
 * @head: the head of the list
 * @str: the string
 * Return: the last element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i;
	list_t *endNode;
	list_t *currNode;
	list_t *tempNode;
	list_t *newNode  = malloc(sizeof(list_t));

	if (head == NULL)
		return (NULL);

	if (newNode != NULL)
	{
		newNode->len = strlen(str);
		newNode->str = malloc(sizeof(char) * (newNode->len + 1));
		newNode->next = NULL;
	}

	if (newNode == NULL || newNode->str == NULL)
	{
		currNode = *head;
		while (currNode != NULL)
		{
			tempNode = currNode;
			currNode = currNode->next;
			free(tempNode->str);
			free(tempNode);
		}

		if (newNode->str != NULL)
			free(newNode->str);
		if (newNode != NULL)
			free(newNode);
		return (NULL);
	}

	for (i = 0; i <= newNode->len; i++)
		newNode->str[i] = str[i];
	newNode->str[newNode->len] = '\0';

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	endNode = *head;
	while (endNode->next != NULL)
		endNode = endNode->next;

	endNode->next = newNode;
	return (newNode);
}
