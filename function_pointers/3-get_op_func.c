#include "3-calc.h"
#include <stdio.h>
#include <string.h>

/**
 * get_op_func - selects the correct function to perform the operation 
 * @s: operator
 *
 * Return: NULL
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t ops_array[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	while (ops_array[i].op != NULL)
	{
		if (strcmp(ops_array[i].op, s) == 0)
		{
			return (ops_array[i].f);
		}
		i++;
	}
	return (NULL);
}
