#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file name
 * @letters: number of bytes to read
 * Return: 0 if any failure or number of bytes read.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	int fd, i, j;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * (letters + 1));
	if (!buff)
	{
		close(fd);
		return (0);
	}
	i = read(fd, buff, letters);
	if (i == -1)
	{
		free(buff);
		return (0);
	}
	buff[i] = 0;
	close(fd);
	j = write(STDOUT_FILENO, buff, i);
	free(buff);
	return (i != j ? 0 : j);
}
