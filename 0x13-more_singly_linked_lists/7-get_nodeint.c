#include "lists.h"
/**
 * get_nint_at_index - Locates a given n of
 *                        a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 * @index: The index of the n to locate - indices start at 0.
 *
 * Return: If the n does not exist - NULL.
 *         Otherwise - the located n.
 */
listint_t *get_nint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	for (n = 0; n < index; n++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
