#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - gets length of a string
 * @str: string
 * Return: length of string
 */
int _strlen(char *str)
{
	int i = 0;

	if (str == NULL)
		return (0);

	while (str[i])
		i++;
	return (i);
}
/**
 * _strcpy - copies a string to the other
 * @dest: destination
 * @src: source
 * Return: address to 1st element of dest
 */

char *_strcpy(char *dest, char *src)
{
	int l = _strlen(src);
	int i = 0;

	while (i <= l)
	{
		*(dest + i) = i < l ? *(src + i) : '\0';
		i++;
	}

	return (dest);
}
/**
 * new_dog - create a new dog
 * @name: dog name
 * @age: dog age
 * @owner: owner
 * Return: NULL if fails, pointer to dog if success
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	char *n, *o;
	int ln = _strlen(name), lo = _strlen(owner);

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	n = malloc(sizeof(char) * (ln + 1));
	if (n == NULL)
	{
		free(new);
		return (NULL);
	}
	o = malloc(sizeof(char) * (lo + 1));
	if (o == NULL)
	{
		free(new);
		free(n);
		return (NULL);
	}
	n = _strcpy(n, name);
	o = _strcpy(o, owner);
	new->name = n;
	new->age = age;
	new->owner = o;

	return (new);
}
