#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* more headers goes there */

/**
 * delete_nodeint_at_index - Prints all the elements of a list_t list.
 * @head: ...
 * @index: ...
 *
 * Return: 0
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr;

	if (head == NULL)
		return (-1);
	if (*head == NULL && index == 0)
		return (1);
	if (*head == NULL && index != 0)
		return (-1);
	if (index == 0)
	{
		ptr = *head;
		(*head) = (*head)->next;
		free(ptr);
		return (1);
	}
	else
		return (delete_nodeint_at_index(&((*head)->next), index - 1));
}
