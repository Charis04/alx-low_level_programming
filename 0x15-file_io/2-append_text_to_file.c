#include "main.h"

/**
 * _strlen - gets the length of a string
 * @str: the string
 * Return: length of the string
 */

size_t _strlen(char *str)
{
	size_t len = 0;

	while (str[len])
		len++;
	return (len);
}

/**
 * append_text_to_file - appends text to the end of a fle
 * @filename: name of the file
 * @text_content: text to append
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytswr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytswr = write(fd, text_content, _strlen(text_content));
		if (bytswr == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
