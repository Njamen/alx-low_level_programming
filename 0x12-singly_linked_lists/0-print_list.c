#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/* more headers goes there */

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: ...
 *
 * Return: 0
 */
size_t print_list(const list_t *h)
{
	if (h == NULL)
		return (0);
	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%d] %s\n", h->len, h->str);
	if (h->next != NULL)
		return (1 + print_list(h->next));
	else
		return (1);
}
