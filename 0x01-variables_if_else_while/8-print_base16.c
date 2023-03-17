#include <stdio.h>

/**
 * main - base 16 numbers
 * Description: print out base 16 with putchar and ascii numbers
 * Return: Success
 */

int main(void)
{
	int alph, num;

	alph = 97;
	num = 48;
	while (num <= 57)
	{
		putchar(num);
		num++;
	}

	while (alph <= 102)
	{
		putchar(alph);
		alph++;
	}

	putchar('\n');
	return (0);
}
