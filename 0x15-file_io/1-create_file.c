#include "main.h"
/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: text content
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t len;

	if (filename == NULL)
		return (-1);
	file = creat(filename, S_IRUSR | S_IWUSR);

	if (file == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(file);
		return (0);
	}
	len = write(file, text_content, strlen(text_content));
	if (len == -1)
		return (-1);
	close(file);
	return (0);
}
