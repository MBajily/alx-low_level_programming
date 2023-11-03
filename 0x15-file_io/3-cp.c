#include "main.h"


char *create_buffer(char *file);
void close_file(int fd);


/**
 * *create_buffer - a program that copies the
 * content of a file to another file.
 */
void close_file(int fd)
{
	int closee;

	closee = close(fd);
	if (closee == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}


int main(int argc, char *argv[])
{
	int writee, readd, from, to;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	readd = read(from, buf, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do
	{
		if (from == -1 || readd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}
		writee = write(to, buf, readd);
		if (to == -1 || writee == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}
		readd = read(from, buf, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	}
	while (readd > 0);
	free(buf);
	close_file(from);
	close_file(to);
	return (0);
}
