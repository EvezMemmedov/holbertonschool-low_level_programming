#include "main.h"

/**
 * puts_half - The function should print the second half of the string.
 * @str: The string to print.
 *
 * Return: Nothing(void).
 */
void puts_half(char *str)
{
	int len = 0;
	int n;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		for (n = len / 2; n < len; n++)
		{
			_putchar(str[n]);
		}
	}
	else
	{
		for (n = (len + 1) / 2; n < len; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
