#include "main.h"

/**
 * int_strspn - that gets the length of a prefix substring
 * @s: the initial segment
 * @accept: onsist only of bytes
 *
 * Return: i
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
