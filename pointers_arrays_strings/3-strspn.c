#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: The initial segment of the string
 * @accept: The string containing the list of characters to match
 *
 * Return: The number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j;

	while (s[i] != '\0')
	{
		int found = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (!found)
			break;

		i++;
	}
	return (i);
}
