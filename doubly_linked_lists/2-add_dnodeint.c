#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_dnodeint - that adds a new node at the beginning
 * @head: head
 * @n: integer
 *
 * Return: new_node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	new_node->next = *head;
	if (*head != NULL)
		(*head)->prev = new_node;
	new_node->prev = NULL;
	*head = new_node;
	return (new_node);
}
