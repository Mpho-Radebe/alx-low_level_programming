#include <string.h>
#include "lists.h"
#include <stdlib.h>

list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return NULL;

	newNode->len = strlen(str);
	newNode->str = malloc(sizeof(char) * (newNode->len + 1));

	if (newNode->str == NULL)
		return NULL;

	for (i = 0; i <= newNode->len; i++)
		newNode->str[i] = str[i];

	newNode->next = *head;

	*head = newNode;

	return (newNode);
}
