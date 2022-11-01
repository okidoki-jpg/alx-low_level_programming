#include "main.h"

void _close(int fd);

/**
 * main - program entry point
 * @ac: argument count
 * @av: arguement vector
 *
 * Return: 0 on success
 */

int main(int ac, char **av)
{
	int fd_src, fd_dest, len;
	char buff[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}

	fd_src = open(av[1], O_RDONLY);
	if (fd_src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file%s\n", av[1]);
		exit(98);
	}

	fd_dest = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	len = read(fd_src, buff, sizeof(buff));
	while (len > 0)
	{
		if (write(fd_dest, buff, len) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			_close(fd_dest);
			_close(fd_src);
			exit(99);
		}
		len = read(fd_src, buff, sizeof(buff));
	}
	_close(fd_dest);
	_close(fd_src);
	return (0);
}

void _close(int fd)
{
	close(fd);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
