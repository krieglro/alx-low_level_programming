#include "lists.h"

/**
 * add_nodeint - function adds a new node at
 * the beginning of a linked
 * list
 * @head: the head of a list
 * @n: the n element
 *
 * Return: returns an address of the new element
 * or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
