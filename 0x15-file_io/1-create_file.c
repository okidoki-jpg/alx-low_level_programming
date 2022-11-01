#include "main.h"

/**
 * cteate_file - create a file
 * @filename: name of file to creatw
 * @text_content: content to populate file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT, 0600);
	if (fd == -1)
		return (-1);

	while (text_content && text_content[len])
		len++;

	if (write(fd, text_content, len) == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);


}
