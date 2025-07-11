#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: The string to convert
 *
 * Return: The converted integer, or 0 if no number found
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, result = 0, found_digit = 0;

	while (s[i])
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			found_digit = 1;
			result = result * 10 + (s[i] - '0');
		}
		else if (found_digit)
			break;
		i++;
	}
	return (result * sign);
}
