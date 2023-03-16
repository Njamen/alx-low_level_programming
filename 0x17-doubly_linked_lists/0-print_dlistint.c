#include "lists.h"
/* more headers goes there */

/**
 * print_dlistint - Prints all the elements of a list_t list.
 * @h: ...
 *
 * Return: 0
 */
size_t print_dlistint(const dlistint_t *h)
{
	if (h == NULL)
		return (0);
	printf("%d\n", h->n);
	if (h->next != NULL)
		return (1 + print_dlistint(h->next));
	else
		return (1);
}
