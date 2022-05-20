#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * and returns the head nodes's data
 * @head: head of the list
 *
 * Return: 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	int hnodes;
	listint_t *h;
	listint *purr;

	if (*head == NULL)
		return (0);

	purr = *head;

	hnodes = purr->n;

	h = purr->next;

	free(purr);

	*head = h;

	return (hnodes);
}
