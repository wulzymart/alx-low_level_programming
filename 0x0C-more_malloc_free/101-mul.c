#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * pos_num - checks if a string contains a non-digit char
 * @s: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int pos_num(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - get the length of a string
 * @s: string
 *
 * Return: the length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * error - print error and exit
 * Return: void
 */
void error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: argument list
 *
 * Return:0 (Success)
 */
int main(int argc, char *argv[])
{
	int l1, l2, l, i, rem, n1, n2, *res, j;

	if (argc != 3 || !pos_num(argv[1]) || !pos_num(argv[2]))
		error();
	l1 = _strlen(argv[1]);
	l2 = _strlen(argv[2]);
	l = l1 + l2 + 1;
	res = malloc(sizeof(int) * l);
	if (res == NULL)
		return (1);
	for (i = 0; i < l ; i++)
		res[i] = 0;
	for (l1 = l1 - 1; l1 >= 0; l1--)
	{
		n1 = argv[1][l1] - '0';
		rem = 0;
		for (l2 = _strlen(argv[2]) - 1; l2 >= 0; l2--)
		{
			n2 = argv[2][l2] - '0';
			rem += res[l1 + l2 + 1] + (n1 * n2);
			res[l1 + l2 + 1] = rem % 10;
			rem /= 10;
		}
		if (rem > 0)
			res[l1 + l2 + 1] += rem;
	}
	for (i = 0, j = 0; i < l - 1; i++)
	{
		if (res[i])
			j = 1;
		if (j)
			_putchar(res[i] + '0');
	}
	if (!j)
		_putchar('0');
	_putchar('\n');
	free(res);
	return (0);
}
