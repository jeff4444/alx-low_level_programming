#include <stdlib.h>
#include <sys/types.h>
#include <string.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

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
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
		exit(98);
	}
	fd_to = creat(argv[2], S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	buffer = malloc(1024);
	if (buffer == NULL)
	{
		close(fd_to);
		close(fd_from);
		return (0);
	}
	len1 = read(fd_from, buffer, 1024);

        if (len1 == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
                exit(98);
        }
	while (len1 == 1024)
	{
		len2 = write(fd_to, buffer, 1024);
		if (len2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		len1 = read(fd_from, buffer, 1024);
		if (len1 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
			exit(98);
		}
	}
	len2 = write(fd_to, buffer, strlen(buffer));
	if (len2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	cl_to = close(fd_to);
	if (cl_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	cl = close(fd_from);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	return (0);	
}
