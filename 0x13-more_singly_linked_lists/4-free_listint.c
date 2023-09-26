#include "lists.h"
/**
 * free_listint - Frees a list.
 * @head: Address of the first node of a list.
 **/

void free_listint(listint_t *head)
{
	listint_t *fl;

	while (head)
	{
		fl = head->next;
		free(head);
		head = fl;
	}
}
