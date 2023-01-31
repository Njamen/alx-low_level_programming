#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/* more headers goes there */

/**
 * free_listint2 - function that returns
 * the number of elements in a linked list_t list.
 * @head: ...
 *
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	if (*head == NULL)
		return;
	if ((*head)->next != NULL)
		free_listint2(&((*head)->next));
	free(*head);
	free(head);
}
