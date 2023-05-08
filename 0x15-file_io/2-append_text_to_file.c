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
 * append_text_to_file - creates a file
 * @filename: name of file
 * @text_content: content to append
 * Return: 1 on success -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i, j;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		i = _strlen(text_content);
		j = write(fd, text_content, i);
		close(fd);
		return (i != j ? -1 : 1);
	}
	close(fd);
	return (1);
}
