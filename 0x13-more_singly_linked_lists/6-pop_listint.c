#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/* more headers goes there */

/**
 * pop_listint - function that returns
 * the number of elements in a linked list_t list.
 * @head: ...
 *
 * Return: 0
 */
int pop_listint(listint_t **head)
{
	int data;

	if (head == NULL)
		return (0);
	data = (*head)->n;
	(*head) = (*head)->next;
	return (data);
}
