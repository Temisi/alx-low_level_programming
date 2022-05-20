#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: head of a list
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t yum = 0;

	while (h != NULL)
	{
		h = h->next;
		yum++;
	}
	return (yum);
}
