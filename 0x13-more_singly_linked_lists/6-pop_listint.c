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
	listint_t *ptr;

	if (head == NULL || *head == NULL)
		return (0);
	data = (*head)->n;
	ptr = *head;
	(*head) = (*head)->next;
	free(ptr);
	return (data);
}
