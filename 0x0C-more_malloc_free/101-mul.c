#include <stdlib.h>
#include "main.h"

/**
 * _strlen - gets length of a string
 * @str: string
 * Return: length of string
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of array members
 * @size: size of member elements
 * Return: NULL if it fails and pointer to the allocated memory if it success.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i, s;

	if (size == 0 || nmemb == 0)
		return (NULL);
	s = nmemb * size;
	ptr = malloc(s);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < s; i++)
		ptr[i] = 0;
	return (ptr);
}

/**
 * pos_num - checks if a string is positive number
 * @str: string to check
 * Return: 1 if true 0 if false
 */

int pos_num(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		if (str[i] < '0' || str[i] > '9')
			return (0);
	return (1);
}

/**
 * error - print error and exit
 * Return: void
 */
void error(void)
{
	char *s = "error";

	for (; *s; s++)
		_putchar(*s);
	_putchar('\n');
	exit(98);
}

/**
 * main - multiplies two positive numbers.
 * @argc: arguement count
 * @argv: arguement list
 * Return: ) if success, 98 if failure
 */

int main(int argc, char **argv)
{
	char *res;
	int l1, l2, l, rem, n1, n2, i, j;

	if (argc != 3 || !pos_num(argv[1]) || !pos_num(argv[2]))
		error();
	l1 = _strlen(argv[1]);
	l2 = _strlen(argv[2]);
	l = l1 + l2;
	res = _calloc(l + 1, 1);
	if (res == NULL)
		error();
	l1--;
	for (; l1 >= 0; l1--)
	{
		n1 = argv[1][l1] - '0';
		rem = 0;
		for (l2 = _strlen(argv[2]) - 1; l2 >= 0; l2--)
		{
			n2 = argv[2][l2] - '0';
			rem += res[l1 + l2 + 1] + n1 * n2;
			res[l1 + l2 + 1] = rem % 10;
			rem /= 10;
		}
		res[l1 + l2 + 1] = !rem ? res[l1 + l2 + 1] :
		res[l1 + l2 + 1] + rem;
	}
	for (i = 0, j = 0; i < l; i++)
	{
		if (res[i] > 0)
			j++;
		if (j > 0)
			_putchar(res[i] + '0');
	}
	if (j == 0)
		_putchar('0');
	_putchar('\n');
	free(res);
	return (0);
}
