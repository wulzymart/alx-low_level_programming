#include <stdio.h>
#include <stdlib.h>
/**
 * print_char_hexes - prints chars in hexes
 * @s: string to print
 * @b: bytes to print
 */
void print_char_hexes(char *s, int b)
{
	int i;

	for (i = 0; i < b; i++)
	{
		printf("%02x", (unsigned char)s[i]);
		if (i < (b - 1))
			putchar(' ');
		else
			putchar('\n');
	}
}
/**
 * main - main entry
 * @ac: arg count
 * @av: arg list
 * Return: 0 success, 1 if invalid arg numbers, 2 if byte -ve
 */
int main(int ac, char **av)
{
	int s, i;

	if (ac != 2)
	{
		puts("Error");
		exit(1);
	}
	s = atoi(av[1]);
	if (s < 0)
	{
		puts("Error");
		exit(2);
	}
	print_char_hexes((char *)&main, s);
	return (0);

}
