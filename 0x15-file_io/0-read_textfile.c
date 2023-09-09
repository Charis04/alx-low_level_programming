#include "main.h"

/**
 * read_textfile - Reads text file and prints it to the POSIX std out
 * @filename: name of file to be read
 * @letters: number of letters to be read
 * Return: actual number of letters read or 0 in failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t byts_rd, byts_wr;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	byts_rd = read(fd, buffer, letters);
	if (byts_rd == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	byts_wr = write(STDOUT_FILENO, buffer, byts_rd);
	if (byts_wr != byts_rd)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (byts_wr);
}
