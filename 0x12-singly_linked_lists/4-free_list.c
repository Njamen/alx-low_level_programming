#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/* more headers goes there */

/**
 * free_list - function that returns
 * the number of elements in a linked list_t list.
 * @head: ...
 *
 * Return: 0
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	if (head->next != NULL)
		free_list(head->next);
	free(head->str);
	free(head);
}
