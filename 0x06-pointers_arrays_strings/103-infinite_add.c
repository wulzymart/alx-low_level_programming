#include "main.h"
/**
 * _strlen - calc length of string
 * @s: string to check
 * Return: length
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		i++;
	}
	return (i);
}


/**
 * revstr - reverse a string
 * @s: string to reverse
 * Return: void
 */

void revstr(char *n)
{
	int i = 0;
	int j = 0;
	char temp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		temp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = temp;
	}
}


/**
 * infinite_add - adds 2 long numbers storing result in buffer
 * @n1: number in string 1
 * @n2: string 2
 * @r: buffer
 * @size_r: buffer size
 * Return: 0 if buffer size lower than result, buffer if not
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int l1 = _strlen(n1) - 1;
	int l2 = _strlen(n2) - 1;
	int i = 0;
	int rem = 0;

	while (l1 >= 0 || l2 >= 0 || rem == 1)
	{
		int a = l1 < 0 ? 0 : *(n1 + l1) - '0';
		int b = l2 < 0 ? 0 : *(n2+ l2) - '0';
		int c = a + b + rem;

		if (i >= size_r - 1)
			return (0);
		rem = c / 10;
		*(r + i) = c % 10 + '0';
		i++;
		l1--;
		l2--;
	}
	if (i == size_r)
		return (0);
	*(r + i) = '\0';
	revstr(r);
	return (r);
}
