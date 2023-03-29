#include "main.h"

/**
 * leet - encodes a string to 1337
 * @str: string to be encoded
 * Return: encoded string
 */
char *leet(char *str)
{
	char *letters = "AaEeOoTtLl";
	char *num = "4433007711";
	int i = 0;
	int j;

	while (str[i])
	{
		j = 0;
		while (letters[j])
		{
			if (str[i] == letters[j])
				str[i] = num[j];
			j++;
		}
		i++;
	}

	return (str);
}
