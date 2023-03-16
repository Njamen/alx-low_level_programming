#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* more headers goes there */

/**
 * add_dnodeint - Prints all the elements of a list_t list.
 * @head: ...
 * @n: ...
 *
 * Return: 0
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new != NULL)
	{
		if ((*head) != NULL)
			(*head)->prev = new;
		new->n = n;
		new->next = *head;
		new->prev = NULL;
		*head = new;
		return (*head);
	}
	else
		return (*head);
}
