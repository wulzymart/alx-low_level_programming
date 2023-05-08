#include "main.h"
/**
 * _strlen - count length of string
 * @s: string to be counted address of string
 * Return: returns the length
 */
int _strlen(char *s)
{
	int i = 0;


	while (*(s + i))
	{
		i++;
	}
	return (i);
}
/**
 * create_file - creates a file.
 * @filename: name of file
 * @text_content: content of file
 * Return: 1 on success -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd, i, l;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		l = _strlen(text_content);
		i = write(fd, text_content, l);
		close(fd);
		return (i != l ? -1 : 1);
	}
	close(fd);
	return (1);
}
