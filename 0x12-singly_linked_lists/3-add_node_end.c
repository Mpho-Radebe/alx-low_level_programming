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
	list_t *newNode = malloc(sizeof(list_t));

	if (head == NULL)
		return (NULL);
	
	if (*head == NULL)
		return (NULL);

	if (newNode == NULL)
		return (NULL);

	newNode->len = strlen(str);
	newNode->str = malloc(sizeof(char) * (newNode->len + 1));

	if (newNode->str == NULL)
		return (NULL);

	for (i = 0; i <= newNode->len; i++)
		newNode->str[i] = str[i];

	endNode = *head;
	while (endNode->next != NULL)
		endNode = endNode->next;

	endNode->next = newNode;
	newNode->next = NULL;

	return (newNode);
}
