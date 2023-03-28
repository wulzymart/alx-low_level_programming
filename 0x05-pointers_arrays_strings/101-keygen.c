#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - keaygen for 101-crackme
 * Return: 0;
 */

int main(void)
{
	int check = 2772;
	int n;

	srand(time(NULL));

	while (check > 122)
	{
		n = rand() % 75;
		putchar(n + 48);
		check -= (n + 48);
	}
	if (check > 0)
		putchar(check);
	return (0);
}
