#include "main.h"

/**
 *_strlen - returns the length of a string
 * @s: the string to be checked
 *
 * Return: int which is the length of string
 */

int _strlen(char *s)
{
	int length;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * create_file - creates a file
 * @filename: file name
 * @text_content: NULL terminated string
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int count = 0;
	int length = _strlen(text_content);

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		fd = open(filename, O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	}
	else
	{
		fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	}

	if (fd == -1)
	{
		return (-1);
	}

	if (length != 0)
	{
		count = write(fd, text_content, length);
	}

	if (count != length)
	{
		close(fd);
		return (-1);
	}

	close(fd);

	return (1);
}
