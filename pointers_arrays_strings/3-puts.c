#include "main.h"
#include <stdio.h>

/**
 * _puts - that prints a string, followed by a new line, to stdout.
 * @str: The string to print.
 *
 * Return: Nothing(void).
 */
void _puts(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
