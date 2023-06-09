#include "main.h"
/**
 * printerr97 - print error 97
*/
void printerr97(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}
/**
 * printerr98 - print error 98
 * @str: arguement string
 * @fd1: file descriptor 1
 * @fd2: file descriptor 2
*/
void printerr98(char *str, int fd1, int fd2)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
	if (fd1 != -1)
		close(fd1);
	if (fd2 != -1)
		close(fd2);
	exit(98);
}
/**
 * printerr99 - print error 99
 * @str: arguement string
 * @fd1: file descriptor 1
 * @fd2: file descriptor 2
*/
void printerr99(char *str, int fd1, int fd2)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
	if (fd1 != -1)
		close(fd1);
	if (fd2 != -1)
		close(fd2);
	exit(99);
}
/**
 * main - copies the content of a file to another file.
 * @ac: arguement count
 * @av: arguement vector
 * Return: 0 if success
*/
int main(int ac, char **av)
{
	int a, b, e, fd1 = -1, fd2 = -1;
	char buff[1024];

	if (ac != 3)
		printerr97();
	fd1 = open(av[1], O_RDONLY);
	if (fd1 == -1)
		printerr98(av[1], fd1, fd2);
	fd2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	while ((e = read(fd1, buff, 1024)) > 0)
	{
		if (fd2 == -1 || (write(fd2, buff, e) != e))
			printerr99(av[2], fd1, fd2);
	}
	if (e == -1)
		printerr98(av[1], fd1, fd2);
	a = close(fd1);
	b = close(fd2);
	if (a == -1 || b == -1)
	{
		if (a == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", a);
		if (a == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", a);
		exit(100);
	}
	return (0);
}
