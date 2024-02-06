#include "lists.h"
/**
 * print_listint - Print elements of a singly linked list.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t print_listint(const listint_t *h)
{
	const listint_t *pe;
	unsigned int count = 0;

	pe = h;
	while (pe)
	{
		printf("%d\n", pe->n);
		pe = pe->next;
		count++;
	}
	return (count);
}
