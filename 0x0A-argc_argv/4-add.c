#include <stdio.h>

/**
 * checkarg - checks if an arguement is positive integer
 * @n: the arguement
 * Return: 0 if not a positive integer, 1 if it is
 */

int checkarg(char *n)
{
	while (*n)
	{
		if (*n < '0' || *n > '9')
			return (0);
		n++;
	}
	return (1);
}

/**
 * getint - converts string numbers to int
 * @n: string number
 * Return: integer
 */

int getint(char *n)
{
	int num = 0;
	int j = 0;

	while (n[j])
	{
		num = num * 10 + (n[j] - '0');
		j++;
	}
	return (num);
}

/**
 * main - adds positive numbers
 * @argc: CL arguement count
 * @argv: CL arguement list
 * Return: 1 if error 0 if successful
 */

int main(int argc, char **argv)
{
	int sum = 0;
	int i = 1;

	while (i < argc)
	{
		if (!checkarg(argv[i]))
		{
			puts("Error");
			return (1);
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		sum += getint(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
