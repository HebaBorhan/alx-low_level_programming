#include <string.h>
#include <stdio.h>

int main(void)
{
	char str[] = "Palestine is free";
	char *delim = " ";
	char *token;

	token = strtok(str, delim);
	while (token)
	{
		printf("%s ", token);
		
		token = strtok(NULL, delim);
	}
	return (0);
}

