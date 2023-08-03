#include "lists.h"

/**
 * print_listint - a function that
 * prints all the elements of a
 * listint_t list.
 * @h: the first nnode.
 * Return: the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	register size_t count = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
