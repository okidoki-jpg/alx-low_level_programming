#include "main.h"

/**
 * read_textfile - read and print a text file
 * @filename: name of text file
 * @letters: number of letters to print
 *
 * Return: number of succesfully printed letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t count = 0;
	char *out;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 03)
		return (0);

	out = malloc(sizeof(filename) * letters);
	if (!out)
	{
		close(fd);
		return (0);
	}

	count = read(fd, out, letters);
	if (count < 0)
	{
		close(fd);
		free(out);
		return (0);
	}

	count = write(STDOUT_FILENO, out, count);
	free(out);
	close(fd);
	if (count < 0)
		return (0);
	return (count);
}
