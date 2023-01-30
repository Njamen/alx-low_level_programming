#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/* more headers goes there */

/**
 * listint_len - function that returns
 * the number of elements in a linked list_t list.
 * @h: ...
 *
 * Return: 0
 */
size_t listint_len(const listint_t *h)
{
	if (h == NULL)
		return (0);
	if (h->next != NULL)
		return (1 + listint_len(h->next));
	else
		return (1);
}
