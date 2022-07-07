#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list_t list
 * @head: pointer to the first node
 * @n: an element to be added
 * Return: the address of the new element, otherwise NULL
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_head;

	new_head = malloc(sizeof(dlistint_t *));

	if (new_head == NULL)
	{
		return (NULL);
	}
	new_head->next = *head;
	*head = new_head;
	new_head->n = n;
	return (new_head);
}
