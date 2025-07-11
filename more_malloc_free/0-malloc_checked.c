#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - hat allocates memory using malloc
 * @b: size of byte
 *
 * Return: ptr
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
