#include <stdio.h>

/**
 * main - print numbers
 * Description: print numbers 0-9 with putchar
 * Return: success
 */

int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	
	putchar('\n');
	return (0);
}
