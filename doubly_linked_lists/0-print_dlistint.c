#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_dlistint - that prints all the elements
 * @h: pointer to the head of the list
 *
 * Return: count
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		printf("%d\n",h->n);
		h = h->next;
	}
	return (count);
}
