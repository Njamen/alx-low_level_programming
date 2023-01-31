#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* more headers goes there */

/**
 * insert_nodeint_at_index - Prints all the elements of a list_t list.
 * @head: ...
 * @idx: ...
 * @n: ...
 *
 * Return: 0
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;

	if (head == NULL || *head == NULL)
		return (NULL);
	if (*head == NULL && idx != 0)
		return (NULL);
	if (idx == 0)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = *head;
		*head = new;
		return (*head);
	}
	else
		return (insert_nodeint_at_index(&((*head)->next), idx - 1, n));
}
