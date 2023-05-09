#include "main.h"
/**
 * append_text_to_file - appends text to EOF
 * @filename: file name
 * @text_content: text content
 * Return: 1 (Sucess) -1 (Failure)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t len;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	len = write(file, text_content, strlen(text_content));
	if (len == -1)
		return (-1);
	close(file);
	return (1);
}
