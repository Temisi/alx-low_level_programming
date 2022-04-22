#include "lists.h"

/**
 * free_list - function that frees a linked list
 * @head: head of linked list
 *
 * Return: no return
 */

void free_list(list_t *head)
{
	list_t *new;

	while (head != NULL)
	{
		free(head->str);
		new = head;
		head = head->next;
		free(new);
	}
}
