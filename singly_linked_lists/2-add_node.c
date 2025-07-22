#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning 
 * @head: head
 * @str: str
 *
 * Return: new_node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = malloc(strlen(str) + 1);

	if (new_node->str == NULL)
	{
		return(NULL);
	}
	strcpy(new_node->str, str);

	new_node->len = strlen(str);

	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
