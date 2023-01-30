#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* more headers goes there */

/**
 * add_nodeint - Prints all the elements of a list_t list.
 * @head: ...
 * @n: ...
 *
 * Return: 0
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new != NULL)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (*head);
	}
	else
		return (*head);
}
