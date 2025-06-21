#include "main.h"

/**
 * _strcpy - src stringini dest-ə kopyalayır (sonundakı \0 ilə birlikdə)
 * @dest: Nüsxənin gedəcəyi yer (təyinat bufferi)
 * @src: Kopyalanacaq mənbə string
 *
 * Return: dest pointer-i
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return dest;
}
