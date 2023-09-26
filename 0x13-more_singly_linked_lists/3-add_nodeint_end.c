#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Add a new node at the end of a list.
 * @head: Address of the first node of a list.
 * @n: Integer to insert in the new node.
 * Return: Address of the new node.
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ane, *ane2;

	ane = malloc(sizeof(listint_t));
	if (ane == NULL)
		return (NULL);

	ane->n = n;
	ane->next = NULL;

	if (*head == NULL)
	{
		*head = ane;
		return (ane);
	}

	ane2 = *head;
	while (ane2->next)
		ane2 = ane2->next;
	ane2->next = ane;
	return (ane);
}
