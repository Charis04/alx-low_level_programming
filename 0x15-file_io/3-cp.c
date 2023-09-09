#include "main.h"

void cp_content(const char *src, const char *dest);

/**
 * main - copies contents of one file to another
 * @ac: arg count
 * @av: arg vector = src file and dest file
 * Return: 0
 */

int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	cp_content(av[1], av[2]);

	return (0);
}

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
 * cp_content - copies contents of one file to another
 * @src: source file
 * @dest: destination file
 * Return: void
 */

void cp_content(const char *src, const char *dest)
{
	int srcfd, destfd, close1, close2;
	ssize_t bytsrd, bytswr;
	char buffer[1025];

	srcfd = open(src, O_RDONLY);
	if (srcfd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	bytsrd = read(srcfd, buffer, 1024);
	if (bytsrd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}
	buffer[bytsrd] = '\0';

	destfd = open(dest, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (destfd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
		exit(99);
	}

	bytswr = write(destfd, buffer, _strlen(buffer));
	if (bytswr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
		exit(99);
	}

	close1 = close(srcfd);
	if (close1 == -1)
	{
		dprintf(2, "Error: Can't close fd %d", srcfd);
		exit(100);
	}
	close2 = close(destfd);
	if (close2 == -1)
	{
		dprintf(2, "Error: Can't close fd %d", destfd);
		exit(100);
	}
}
