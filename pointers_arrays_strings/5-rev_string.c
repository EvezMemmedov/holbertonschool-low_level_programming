#include "main.h"

/**
 * rev_string - reverses a string in place.
 * @s: The string to be measured.
 *
 * Return: Nothing(void).
 */
void rev_string(char *s)
{
	int i = 0;
	int len = 0;
	char temp;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}
