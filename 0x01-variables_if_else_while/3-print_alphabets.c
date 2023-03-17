#include <stdio.h>

/**
 * main - print all alphabets lower then upper
 * Description: uses ascii to print character
 * Return: success
 */

int main(void)
{
	int l, u;

	l = 97;
	while (l <= 122)
	{
		putchar(l);
		l++;
	}

	u = 65;
	while (u <= 90)
	{
		putchar(u);
		u++;
	}

	putchar('\n');
}
