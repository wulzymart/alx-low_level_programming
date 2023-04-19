#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - calculates simple operations on 2 numbers
 * @ac: arguement count
 * @av: array of arguements
 * Return: 0 (success) 98, 99 or 100 if fails
 */

int main(int ac, char **av)
{
	int a, b;

	if (ac != 4)
	{
		puts("Error");
		exit(98);
	}
	a = atoi(av[1]);
	b = atoi(av[3]);
	if (get_op_func(av[2]) == NULL)
	{
		puts("Error");
		exit(99);
	}
	if ((av[2][0] == '/' || av[2][0] == '%') && atoi(av[3]) == 0)
	{
		puts("Error");
		exit(100);
	}
	printf("%d\n", get_op_func(av[2])(a, b));
	return (0);
}
