#include "main.h"
/**
 * swap_int - that swaps the values of two integers.
 * @a: first value
 * @b: second value
 *
 * return: Nothing (void)
 */
void swap_int(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
