#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - calculates the length of a string
 * @s: the string
 *
 * Return: length
 */
int _strlen(const char *s)
{
    int i = 0;

    while (s[i])
        i++;
    return (i);
}

/**
 * _strcpy - copies string from src to dest
 * @dest: destination buffer
 * @src: source string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, const char *src)
{
    int i = 0;

    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to new dog (dog_t), or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *d;
    char *n_copy, *o_copy;
    int name_len, owner_len;

    d = malloc(sizeof(dog_t));
    if (d == NULL)
        return (NULL);

    name_len = _strlen(name);
    owner_len = _strlen(owner);

    n_copy = malloc(name_len + 1);
    if (n_copy == NULL)
    {
        free(d);
        return (NULL);
    }

    o_copy = malloc(owner_len + 1);
    if (o_copy == NULL)
    {
        free(n_copy);
        free(d);
        return (NULL);
    }

    _strcpy(n_copy, name);
    _strcpy(o_copy, owner);

    d->name = n_copy;
    d->age = age;
    d->owner = o_copy;

    return (d);
}
