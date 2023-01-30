#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/* more headers goes there */

/**
 * print_listint - Prints all the elements of a list_t list.
 * @h: ...
 *
 * Return: 0
 */
size_t print_listint(const listint_t *h)
{
	if (h == NULL)
		return (0);
	printf("%d\n", h->n);
	if (h->next != NULL)
		return (1 + print_listint(h->next));
	else
		return (1);
}
