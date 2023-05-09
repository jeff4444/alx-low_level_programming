#include <stdlib.h>
#include <sys/types.h>
#include <string.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
/**
 * check_error - checks for errors
 * @file1: file one data
 * @file2: file two data
 * @argv: list of cmd line args
 */
void check_error(int file1, int file2, char **argv)
{
	if (file1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
		exit(98);
	}
	if (file2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * check_close - checks if a file closed
 * @fd: file
 */
void check_close(int fd, int close)
{
	if (close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}


/**
 * main - copies one file to another
 * @argc: number of cmd line args
 * @argv: list of cmd line args
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, cl_to, cl;
	ssize_t len1, len2;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	check_error(fd_from, 0, argv);
	fd_to = creat(argv[2], S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	check_error(0, fd_to, argv);
	buffer = malloc(1024);
	if (buffer == NULL)
	{
		close(fd_to);
		close(fd_from);
		return (0);
	}
	len1 = read(fd_from, buffer, 1024);
	check_error(len1, 0, argv);
	while (len1 == 1024)
	{
		len2 = write(fd_to, buffer, 1024);
		check_error(0, len2, argv);
		len1 = read(fd_from, buffer, 1024);
		check_error(len1, 0, argv);
	}
	len2 = write(fd_to, buffer, strlen(buffer));
	check_error(0, len2, argv);
	cl_to = close(fd_to);
	check_close(fd_to, cl_to);
	cl = close(fd_from);
	check_close(fd_from, cl);
	return (0);
}
