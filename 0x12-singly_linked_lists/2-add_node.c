#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of
 * a singly linked list
 * @head: head of the linked list
 * @str: string to store the list
 *
 * Return: address to the new element, or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t p;

	new = (list_t *)malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (p = 0; str[p]; p++)
		;

	new->len = p;
	new->next = *head;
	*head = new;

	return (*head);
}
