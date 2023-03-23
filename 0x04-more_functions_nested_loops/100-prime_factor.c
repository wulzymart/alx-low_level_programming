#include <stdio.h>

/**
 * main - main
 * Description - prints the largest prime factor of number
 * Return: 0
 */

int main(void)
{
	long int n = 612852475143;
	long int c = 2;
	long int max;

	while (n > 1)
	{
		if (n % c == 0)
		{
			max = c;
			n /= c;
		}
		else
			c++;
	}
	printf("%ld\n", max);
	return (0);
}
