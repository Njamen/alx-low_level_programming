#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* more headers goes there */

/**
 * add_node - Prints all the elements of a list_t list.
 * @head: ...
 * @str: ...
 *
 * Return: 0
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new != NULL)
	{
		new->str = strdup(str);
		new->len = strlen(str);
		new->next = *head;
		*head = new;
		return (*head);
	}
	else
		return (*head);
}
