#include <stdio.h>

/**
 * main - prints alphabets a-z
 * Description: prints all alphabrts from a-z by looping through ascii table
 * Return: 0
 */
int main(void)
{
	char c = 97;

	while (c <= 122)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
}
