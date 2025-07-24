#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the end 
 * @head: head
 * @str: str
 *
 * Return: new_node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *current = *head;

	if (new_node == NULL)
		return(NULL);

	new_node->str = strdup(str);
	
	if (new_node->str == NULL)
	{
		free(new_node);
		return(NULL);
	}

	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return(new_node);
	}

	while(current->next != NULL)
		current = current->next;

	current->next = new_node;

	return(new_node);
}
