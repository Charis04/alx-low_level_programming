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
 * create_file - Creates a file
 * @filename: Name of file to create
 * @text_content: content of file to be created
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytswr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
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
