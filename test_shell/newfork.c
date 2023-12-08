#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void)
{
	pid_t child_pid = fork();

	if (child_pid != 0)
	{
		fork();
		fork();
	}

	printf("hi\n");

	return(0);
}

