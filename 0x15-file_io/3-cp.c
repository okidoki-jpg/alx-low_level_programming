#include "main.h"

void errorMsg(char *msg, char *file, int exitCode);
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
		errorMsg("Usage: %s file_from file_to\n", av[0], 97);

	fd_src = open(av[1], O_RDONLY);
	if (fd_src == -1)
		errorMsg("Error: Can't read from file %s\n", av[1], 98);

	fd_dest = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_dest == -1)
	{
		_close(fd_src);
		errorMsg("Error: Can't write to %s\n", av[2], 99);
	}

	len = read(fd_src, buff, sizeof(buff));
	while (len > 0)
	{
		if (write(fd_dest, buff, len) == -1)
		{
			_close(fd_dest);
			_close(fd_src);
			errorMsg("Error: Can't write to %s\n", av[2], 99);
		}
		len = read(fd_src, buff, sizeof(buff));
	}
	_close(fd_dest);
	_close(fd_src);
	return (0);
}

/**
 * errorMsg - Display error message, exit with correct
 * value
 * @msg: Error message
 * @file: File triggering error
 * @exitCode: code to exit with
 *
 * Return: void
 */

void errorMsg(char *msg, char *file, int exitCode)
{
	dprintf(STDERR_FILENO, msg, file);
	exit(exitCode);
}

/**
 * _close - close file descriptors, print message & exit
 * with 100 on fail
 * @fd: fd handle
 *
 * Return: void
 */

void _close(int fd)
{
	if (close(fd))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
