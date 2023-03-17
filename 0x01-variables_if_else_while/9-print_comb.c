#include <stdio.h>

/**
 * main - combination of single digits
 * Description: print combination single digits, with ,
 * Return: success
 */

int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		if (n != 57)
			putchar(',');
		n++;
	}
	putchar('\n');
	return (0);
}
