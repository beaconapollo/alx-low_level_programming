#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the first node
 * @str: char pointer for data to be added
 * Return: the address of the new element, otherwise NULL
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current, *end_node;
	char *dupstr;
	int i = 0, len;

	if (*head == NULL)
		return (NULL);

	end_node = malloc(sizeof(list_t));
	if (end_node == NULL)
		return (NULL);

	if (str)
	{
		while (*(str + i))
			i++;
		len = i + 1;
		i = 0;

		dupstr = malloc(sizeof(char) * len);
		if (dupstr == NULL)
			return (NULL);
		while (*(str + i))
		{
			dupstr[i] = str[i];
			i++;
		}
		dupstr[i] = '\0';

		end_node->str = dupstr;
		end_node->len = len - 1;
	}
	else
	{
		end_node->str = NULL;
		end_node->len = 0;
	}

	end_node->next = NULL;

	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = end_node;

	return (end_node);
}
