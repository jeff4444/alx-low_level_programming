#include <stdlib.h>
#include <sys/types.h>
#include <string.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	char *err = "Usage: cp file_from file_to\n";
	char *err_from = "Error: Can't read from ";

	err_from = strcat(err_from, argv[0]);
	if (argc != 2)
	{
		write(STDERR_FILENO, err, strlen(err));
		exit(97);
	}
	fd_from = open(argv[0], O_RDONLY);
	if (fd_from == -1)
	{
		write(STDERR_FILENO, err_from, strlen(err_from));
		exit(98);
	}
	fd_to = creat(argv[1], 
