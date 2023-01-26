#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* more headers goes there */

/**
 * add_node_end - Prints all the elements of a list_t list.
 * @head: ...
 * @str: ...
 *
 * Return: 0
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *ptr;

	if (*head == NULL)
	{
		new = malloc(sizeof(list_t));
		if (new != NULL)
		{
			new->str = strdup(str);
			new->len = strlen(str);
			new->next = *head;
			*head = new;
		}
		return (*head);
	}
	ptr = *head;
	while (ptr->next != NULL)
		ptr = ptr->next;
	new = malloc(sizeof(list_t));
	if (new != NULL)
	{
		new->str = strdup(str);
		new->len = strlen(str);
		new->next = NULL;
		ptr->next = new;
	}
	return (*head);
}

