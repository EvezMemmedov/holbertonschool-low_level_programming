#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - that returns the number of elements
 * @h: pointer to the head of the list
 *
 * Return: count
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
