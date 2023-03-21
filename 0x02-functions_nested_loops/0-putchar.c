#include "main.h"
/**
 * main - print _putchar
 * Description: prints _putchar
 * Return: success
 */
int main(void)
{
	char a[]  = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(a[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
