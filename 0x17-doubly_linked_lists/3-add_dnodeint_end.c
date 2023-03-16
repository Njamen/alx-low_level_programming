#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* more headers goes there */

/**
 * add_dnodeint_end - Prints all the elements of a list_t list.
 * @head: ...
 * @n: ...
 *
 * Return: 0
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *ptr;

	if (*head == NULL)
	{
		new = malloc(sizeof(dlistint_t));
		if (new != NULL)
		{
			new->n = n;
			new->next = *head;
			new->prev = NULL;
			*head = new;
		}
		return (*head);
	}
	ptr = *head;
	while (ptr->next != NULL)
		ptr = ptr->next;
	new = malloc(sizeof(dlistint_t));
	if (new != NULL)
	{
		new->n = n;
		new->next = NULL;
		new->prev = ptr;
		ptr->next = new;
	}
	return (*head);
}

