#include "lists.h"

/**
 * listint_len - returns the number of elements
 * @h: head of a list
 *
 * Return: numbers of nodes returned
 */

size_t listint_len(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		nnodes++;
		h = h->next;
	}
	return (nnodes);
}
