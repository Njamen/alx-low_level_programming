#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/* more headers goes there */

/**
 * sum_dlistint - function that returns
 * the number of elements in a linked list_t list.
 * @head: ...
 *
 * Return: 0
 */
int sum_dlistint(dlistint_t *head)
{

	if (head == NULL)
		return (0);
	else
		return (head->n + sum_dlistint(head->next));
}
