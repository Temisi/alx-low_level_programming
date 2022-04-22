#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of
 * a linked list
 * @head: head of a linked list
 * @str: string to store the list
 *
 * Return: address of the new element or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t mchar;

	new = (list_t *)malloc(sizeof(list_t));

	if (new == NULL)
	{
		printf("Error! Memory was not allocated!");
		exit(-1);
	}

	new->str = strdup(str);

	for (mchar = 0; str[mchar]; mchar++)
		;
	new->len = mchar;
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (*head);
i}
