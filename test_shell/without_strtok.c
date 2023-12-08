#include <string.h>
#include <stdio.h>

int main(void)
{
	char str[] = "Palestine is free";

	int i = 0;

	while (str[i])
	{
		int j = i;

		while(str[j] != ' ' && str[j] != '\0')
		{
			printf("%c", str[j]);
			j++;
		}

		printf(" ");

		i = j + 1;
	}
	return (0);
}

