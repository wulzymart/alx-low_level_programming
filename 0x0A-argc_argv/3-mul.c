#include <stdio.h>

/**
 * getint - converts string numbers to int
 * @n: string number
 * Return: integer
 */

int getint(char *n)
{
	int num = 0;
	int i = 1;
	int j = 0;

	while (n[j])
	{
		if (j == 0 && n[j] == '-')
			i = -1;
		else
			num = num * 10 + (n[j] - '0');
		j++;
	}
	return (num * i);
}

/**
 * main - program that multiplies two numbers.
 * @argc: CL arguement count
 * @argv: cl arguements
 * Return: 1 if arguements are not 2, 0 id successful
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	printf("%d\n", getint(argv[1]) * getint(argv[2]));
	return (0);
}
