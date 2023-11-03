#include "main.h"


/**
 * create_file - a function that creates a file.
 *
 * @text_content: is a NULL terminated string to
 * write to the file
 * @filename: is the name of the file to create
 *
 * Return: 1 on success, -1 on failure (file can
 * not be created, file can not be written,
 * write “fails”, etc…)
 */
int create_file(const char *filename, char *text_content)
{
	int x, y, filee;

	y = 0;
	if (!filename)
	{
		return (-1);
	}
	filee = open(filename, O_CREAT | O_RDWR | O_TRUNC | 0600);
	if (filee < 0)
	{
		return (-1);
	}
	if (text_content)
	{
		while (text_content[y])
		{
			y++;
		}
		x = write(filee, text_content, y);
		if (x != y)
		{
			return (-1);
		}
	}
	close(filee);
	return (1);
}
