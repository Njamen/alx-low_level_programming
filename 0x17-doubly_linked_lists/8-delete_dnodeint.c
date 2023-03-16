#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* more headers goes there */

/**
 * delete_dnodeint_at_index - Prints all the elements of a list_t list.
 * @head: ...
 * @index: ...
 *
 * Return: 0
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr;

	if (head == NULL)
		return (-1);
	if (*head == NULL && index == 0)
		return (-1);
	if (*head == NULL && index != 0)
		return (-1);
	if (index == 0)
	{
		ptr = *head;
		(*head)->next->prev = (*head)->prev;
		(*head) = (*head)->next;
		free(ptr);
		return (1);
	}
	else
		return (delete_dnodeint_at_index(&((*head)->next), index - 1));
}
