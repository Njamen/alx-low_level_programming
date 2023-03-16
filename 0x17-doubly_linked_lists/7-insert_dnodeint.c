#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* more headers goes there */

/**
 * insert_dnodeint_at_index - Prints all the elements of a list_t list.
 * @h: ...
 * @idx: ...
 * @n: ...
 *
 * Return: 0
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;

	if (h == NULL)
		return (NULL);
	if (*h == NULL && idx != 0)
		return (NULL);
	if (idx == 0)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = *h;
		if ((*h) != NULL)
			new->prev = (*h)->prev;
		else
			new->prev = NULL;
		if ((*h) != NULL)
		{
			if ((*h)->prev->next != NULL)
				(*h)->prev->next = new;
			(*h)->prev = new;
		}
		*h = new;
		return (*h);
	}
	else
		return (insert_dnodeint_at_index(&((*h)->next), idx - 1, n));
}
