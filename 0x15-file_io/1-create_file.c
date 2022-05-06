#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: filename
 * @text_content: content writed in the file
 *
 * Return: 1 if it suceeded, -1 if fails
 */

int create_file(const char *filename, char *text_content)
{
	int fd, fwrite, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i]; i++)
			;

		fwrite = write(fd, text_content, i);

		if (fwrite == -1)
			return (-1);
	}
	close(fd);

	return (1);
}
