#include <stdio.h>

/**
 * main - prints alphabets a-z
 * Description: prints all alphabrts from a-z by looping through ascii table
 * Return: 0
 */
int main(void)
{
	for (char c = 97 ; c <= 122 ; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
