#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * insert_node - Inserts a number into a sorted singly linked list.
 *
 * @head: Heads of the list.
 * @number: Number to insert into the list.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *tmp, *prev, *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	tmp = prev = *head;
	new->n = number;

	while (tmp != NULL)
	{
		if (tmp->n > number)
		{
			if (tmp != prev)
				prev->next = new;
			else
				*head = new;
			new->next = tmp;

		return (new);
		}

	prev = tmp;
	tmp = tmp->next;
	}

	prev->next = new;
	new->next = NULL;

	return (new);
}
