#include "main.h"

/**
 * _strchr - search for a character in a string
 *
 * @s: pointer to string
 * @c: character to search
 *
 * Return: Returns a pointer to the first occurrence of the character c in the
 * string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (*(s + i))
	{
		i++;
		if (*(s + i) == c)
			return (s + i);
	}
	return (0);
}
