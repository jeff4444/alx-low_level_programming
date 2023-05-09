#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 * @filename: filename
 * @letters: number of letters to read and print
 * Return: 0 (Failure) or number of letters it could print (Sucess)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t i;
	char *buffer;

	if (filname == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(file);
		return (0);
	}
	i = read(file, buffer, letters);
	if (i == -1)
	{
		free(buffer);
		return (0);
	}
	close(file);
	write(STDOUT_FILENO, buffer, i);
	free(buffer);
	return (i);
}
