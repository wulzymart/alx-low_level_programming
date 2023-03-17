#include <stdio.h>

/**
 * main - print alphabets backwards
 * Description: print alphabets with putchar
 * Return: success
 */

int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
