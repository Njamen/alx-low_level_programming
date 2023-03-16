#include "lists.h"
/* more headers goes there */

/**
 * dlistint_len - Prints all the elements of a list_t list.
 * @h: ...
 *
 * Return: 0
 */
size_t dlistint_len(const dlistint_t *h)
{
	if (h == NULL)
		return (0);
	if (h->next != NULL)
		return (1 + dlistint_len(h->next));
	else
		return (1);
}
