#include <string.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_node - addes a node
 * @head: head of the list
 * @str: the string
 * Return: the new head
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int i;
	list_t *newNode = malloc(sizeof(list_t));
	list_t *temp_node;
	list_t *curr_node;

	if (newNode == NULL)
	{
		if (*head == NULL)
			return (NULL);
		curr_node = *head;
		while (curr_node->next != NULL)
		{
			temp_node = curr_node;
			curr_node = curr_node->next;
			free(temp_node);
		}
		free(curr_node);
		return (NULL);
	}

	newNode->len = strlen(str);
	newNode->str = malloc(sizeof(char) * (newNode->len + 1));

	if (newNode->str == NULL)
		return (NULL);

	for (i = 0; i <= newNode->len; i++)
		newNode->str[i] = str[i];

	newNode->next = *head;

	*head = newNode;

	return (newNode);
}
