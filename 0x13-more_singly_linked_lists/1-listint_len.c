#include "lists.h"

/**
 * listint_len - prints the number of elements of a listint_t list
 * @h: linked list to be printed
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t a = 0;

	while (h)
	{
		h = h->next;
		a++;
	}
	return (a);
}
