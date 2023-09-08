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
	fd = open(filename, O_RDWR);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Failed to open file");
		return (0);
	}

	buffer = malloc(sizeof(char) * letters + 1);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Failed to create buffer to read file to");
		return (0);
	}
	buffer[letters] = '\0';

	byts_rd = read(fd, buffer, letters);
	if (byts_rd == -1)
	{
		dprintf(STDERR_FILENO, "Failed to read file");
		return (0);
	}
	buffer[byts_rd] = '\0';

	byts_wr = write(STDOUT_FILENO, buffer, byts_rd);
	if (byts_wr == -1)
	{
		dprintf(STDERR_FILENO, "Failed to print text");
		return (0);
	}
	if (byts_wr != byts_rd)
	{
		dprintf(STDERR_FILENO, "Failed to print expected number of bytes");
		return (0);
	}
	free(buffer);
	return (byts_wr);
}