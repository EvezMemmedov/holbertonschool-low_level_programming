#include "main.h"

/**
 * leet - that encodes a string
 * @str: massiv
 *
 * Return: str
 */
char *leet(char *str)
{
	char leet[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	char letters[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int i = 0, j;

	while (str[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = leet[j];
				break;

			}
		}
		i++;
	}

	return (str);
}
