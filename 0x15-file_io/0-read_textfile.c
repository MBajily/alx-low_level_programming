#include "main.h"
#include <stdlib.h>


/**
 * read_textfile - a function that reads
 * a text file and prints it to the POSIX
 * standard output.
 *
 * @filename: file name
 * @letters: number of letters
 *
 * Return: the actual number of letters
 * it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int i, n;
	char *buf;
	int filee;

	if (!filename)
	{
		return (0);
	}
	filee = open(filename, O_RDONLY);
	if (filee < 0)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	if (!buf)
	{
		return (0);
	}
	i = read(filee, buf, letters);
	if (i < 0)
	{
		free(buf);
		return (0);
	}
	buf[i] = '\0';
	close(filee);
	n = write(STDOUT_FILENO, buf, i);
	if (n < 0)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (n);
}
