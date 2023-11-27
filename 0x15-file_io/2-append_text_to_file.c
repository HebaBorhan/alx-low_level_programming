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
 * append_text_to_file - appends text at end of file
 * @filename: file name
 * @text_content: NULL terminated string
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int count = 0;
	int length = _strlen(text_content);

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	if (length != 0)
	{
		count = write(fd, text_content, length);
	}
	if (count == -1)
	{
		close(fd);
		return (-1);
	}
	if (count != length)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
