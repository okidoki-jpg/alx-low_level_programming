#include "main.h"

/**
 * append_text_to_file - add given text to end of file
 * @filename: name of file to edit
 * @text_content: data to add to file
 *
 * Return: 1 on succes, else -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}

	while (text_content[len])
		len++;

	if (write(fd, text_content, len) == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
