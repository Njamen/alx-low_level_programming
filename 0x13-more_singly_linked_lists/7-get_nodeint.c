#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/* more headers goes there */

/**
 * get_nodeint_at_index - function that returns
 * the number of elements in a linked list_t list.
 * @head: ...
 * @index: ...
 *
 * Return: 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	else
		return (get_nodeint_at_index(head->next, index - 1));
}
