#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * sum_dlistint - Computes the sum of all the data (n) in a dlistint_t list.
 * @head: Pointer to the head of the doubly linked list.
 *
 * Return: The sum of all the data (n) in the list.
 *         If the list is empty, returns 0.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	if (head == NULL)
		return (0);

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
