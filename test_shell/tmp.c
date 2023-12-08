#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * main - fork + wait + execve
 *
 * Return: Always 0.
 */

int main(void)
{
	pid_t child_pid;
	char *argv[] = {"/bin/ls", "-l", "/tmp/", NULL};
	int status;

	child_pid = fork();

	if (child_pid == -1)
	{
		perror("Error:");
		return (1);
	}

	if (child_pid != 0)
	{
		wait(&status);
		fork();
		wait(&status);
		fork();
		wait(&status);
	}
		 
	if (execve(argv[0], argv, NULL) == -1)
	{
		perror("Error:");
	}

	return (0);
}
