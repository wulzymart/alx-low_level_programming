#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: CL arguement count
 * @argv: CL arguements array
 * Return: void
 */

int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
