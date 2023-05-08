#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * check97 - this function checks for the correct number of arguments
 * @argc:the number of arguments
 * Return: void
 */
void check97(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * check98 - this function checks that file_from exists and can be read
 * @check: it checks if true of false
 * @file: file_from name (origin)
 * @fd_from: file descriptor of file_from, or -1
 * @fd_to: file descriptor of file_to, or -1 (dest)
 *
 * Return: void
 */
void check98(ssize_t check, char *file, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(98);
	}
}

/**
*check99-this function checks that file_to was created or/and can be written to
 * @check: this checks if true of false
 * @file: file_to name
 * @fd_from: file descriptor of file_from, or -1  (origin)
 * @fd_to: file descriptor of file_to, or -1  (dest)
 *
 * Return: void
 */
void check99(ssize_t check, char *file, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(99);
	}
}

/**
 * check100 - this function checks that file descriptors were closed properly
 * @check: it checks if true or false
 * @fd: the actual  file descriptor
 *
 * Return: void
 */
void check100(int check, int fd)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - copies the content of a file to another different file.
 * @argc: the number of arguments passed
 * @argv: the array of pointers to the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, close_to, close_from;
	ssize_t lengthr, lengthw;
	char buffer[1024];
	mode_t file_perm;

	check97(argc);
	fd_from = open(argv[1], O_RDONLY);
	check98((ssize_t)fd_from, argv[1], -1, -1);
	file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perm);
	check99((ssize_t)fd_to, argv[2], fd_from, -1);
	lengthr = 1024;
	while (lengthr == 1024)
	{
		lengthr = read(fd_from, buffer, 1024);
		check98(lengthr, argv[1], fd_from, fd_to);
		lengthw = write(fd_to, buffer, lengthr);
		if (lengthw != lengthr)
			lengthw = -1;
		check99(lengthw, argv[2], fd_from, fd_to);
	}
	close_to = close(fd_to);
	close_from = close(fd_from);
	check100(close_to, fd_to);
	check100(close_from, fd_from);
	return (0);
}

