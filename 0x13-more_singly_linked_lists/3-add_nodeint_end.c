#include "lists.h"

/**
 * add_nodeint_end - adds new node at the end of a linked list
 * @head: head of a list
 * @n: n element
 *
 * Return: address of the new element, NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *des;
	listint_t *temp;

	(void)temp;

	des = malloc(sizeof(listint_t));

	if (des == NULL)
		return (NULL);

	des->n = n;
	des->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = des;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = des;
	}

	return (*head);
}
