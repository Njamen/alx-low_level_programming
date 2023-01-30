#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* more headers goes there */

/**
 * add_nodeint_end - Prints all the elements of a list_t list.
 * @head: ...
 * @n: ...
 *
 * Return: 0
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *ptr;

	if (*head == NULL)
	{
		new = malloc(sizeof(listint_t));
		if (new != NULL)
		{
			new->n = n;
			new->next = *head;
			*head = new;
		}
		return (*head);
	}
	ptr = *head;
	while (ptr->next != NULL)
		ptr = ptr->next;
	new = malloc(sizeof(listint_t));
	if (new != NULL)
	{
		new->n = n;
		new->next = NULL;
		ptr->next = new;
	}
	return (*head);
}

