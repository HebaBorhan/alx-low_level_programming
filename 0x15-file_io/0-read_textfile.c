#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - reads text file and prints it to standard output
 * @filename: file name
 * @letters: number of letters to read and print
 *
 * Return: int numb of letters read & printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t count = 0;

	if (filename == NULL)
	{
		return (0);
	}

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

	count = read(fd, buffer, letters);

	count = write(STDOUT_FILENO, &buffer, count);

	free(buffer);
	close(fd);
	return (count);
}
