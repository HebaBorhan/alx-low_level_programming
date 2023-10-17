# include "main.h"

/**
 * *_strcpy - copies string pointed to by src to buffer pointed to by dest
 *@dest: char variable
 *@src: char variable
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while ((*dest++ = *src++) != '\0')
	{
	}

	return ptr;
}
