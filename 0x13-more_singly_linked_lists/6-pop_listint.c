#include "lists.h"
/**
 * pop_listint - Delete the first element of a singly linked list.
 * @head: Pointer to a list.
 * Return: Integer if success.
 **/

int pop_listint(listint_t **head)
{
	listint_t *dhn;
	int d;

	if (*head == NULL)
		return (0);

	dhn = *head;
	*head = dhn->next;
	d = dhn->n;
	free(dhn);
	return (d);
}
