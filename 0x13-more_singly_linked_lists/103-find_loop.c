#include "lists.h"

/**
 * find_listint_loop - finds a loop
 * @head: the list
 * Return: where the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *cursor1 = NULL;
	listint_t *cursor2 = NULL;

	if (head != NULL)
	{
		cursor1 = head;
		cursor2 = head->next;
	}

	while (cursor2 != NULL)
	{
		cursor1 = head;
		while (cursor1 != cursor2)
		{
			if (cursor1 == cursor2->next)
				return (cursor1);
			cursor1 = cursor1->next;
		}
		cursor2 = cursor2->next;
	}

	return (NULL);
}

