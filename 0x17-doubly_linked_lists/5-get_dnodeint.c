#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/* more headers goes there */

/**
 * get_dnodeint_at_index - function that returns
 * the number of elements in a linked list_t list.
 * @head: ...
 * @index: ...
 *
 * Return: 0
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	else
		return (get_dnodeint_at_index(head->next, index - 1));
}
