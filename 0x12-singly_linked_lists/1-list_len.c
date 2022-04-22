#include "lists.h"

/**
 * list_len - function to return the number of elements in
 * a linked list
 * @h: singly linked list
 *
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	/*Traverse the linked list and maintain the count*/
	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
