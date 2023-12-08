#include <stdio.h>

int main(int arc, char *arv[])
{
	int i;

	char *argv[] = {"./arguments", "Palestine", "is", "free", NULL};

	for (i = 0; argv[i] != NULL; i++)
	{
		printf("argv[%d] is: %s\n", i, argv[i]);
	}
	return (0);
}
