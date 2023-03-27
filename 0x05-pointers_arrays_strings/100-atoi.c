#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string to be converted
 * Return: result
 */
int _atoi(char *s)
{
	unsigned int n = 0;
	int i = 0;
	int minus = 0;

	while (!(*(s + i) >= '0' && *(s + i) <= '9') && *(s + i))
	{
		if (*(s + i) == '-')
			minus++;
		i++;
	}

	while (*(s + i) && (*(s + i) <= '9' && *(s + i) >= '0'))
	{
		n = (n * 10) + (*(s + i) - '0');
		i++;
	}

	n = minus % 2 != 0 ? 0 - n : n;
	return (n);
}
