#include "lists.h"
/**
 * listint_len - Calculate the number of elements.
 * @h: Pointer to a list.
 * Return: Integer.
 **/
size_t listint_len(const listint_t *h)
{
	const listint_t *rne;
	unsigned int count = 0;

	rne = h;
	while (rne)
	{
	rne = rne->next;
	count++;
	}
	return (count);
}
