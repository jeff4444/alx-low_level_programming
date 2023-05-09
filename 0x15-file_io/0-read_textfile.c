#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 * @filename: filename
 * @letters: number of letters to read and print
 * Return: 0 (Failure) or number of letters it could print (Sucess)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file = open(filename, O_RDONLY);
	ssize_t i;
	char *buffer;

	if (file == -1)
		return (0);
	i = read(file, buffer, letters);
	if (i == -1)
		return (0);
	close(file);
	return (i);
}
