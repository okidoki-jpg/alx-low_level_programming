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
	ssize_t idx = 0, count = 0;
	char *out;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	out = malloc(sizeof(filename));
	if (!out)
		return (0);
	
	read(fd, out, letters);
	
	while (out[idx])
	{
		count += write(STDOUT_FILENO, &out[idx], 1);
		idx++;
	}
	if (count != idx)
		return (0);
	return (idx);
}
