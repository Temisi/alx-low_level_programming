#include "lists.h"

/**
 * add_nodeint - adds new node at the beginning of a linked list
 * @head: head of a list
 * @n: n element
 *
 * Return: address of the new element, NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *blah;

	blah = malloc(sizeof(listint_t));

	if (blah == NULL)
		return (NULL);

	blah->n = n;
	blah->next = *head;
	*head = blah;


	return (*head);
}
