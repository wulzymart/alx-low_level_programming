#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount
 * of money
 * @argc: cl arg count
 * @argv: cl arg list
 * Return: 1 if error 0 if success
 */

int main(int argc, char **argv)
{
	int n, change;

	change = 0;
	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	n = atoi(argv[1]);
	if (n <= 0)
		puts("0");
	if (n >= 25)
	{
		change += n / 25;
		n = n % 25;
	}
	if (n >= 10)
	{
		change += n / 10;
		n = n % 10;
	}
	if (n >= 5)
	{
		change += n / 5;
		n = n % 5;
	}
	if (n >= 2)
	{
		change += n / 2;
		n = n % 2;
	}
	if (n >= 1)
	{
		change += n / 1;
		n = n % 1;
	}

	printf("%d\n", change);
	return (0);
}
