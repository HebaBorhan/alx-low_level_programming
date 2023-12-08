#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 *  * main - exercise: fork + wait + execve
 *   *
 *    * Return: Always 0
 *     */
int main(void)
{
	pid_t child_pid;
	int i = 0;
	int status;
	char *argv[] = {"/bin/ls", "-l", "/tmp/", NULL};

	while (i <= 4 && (child_pid != 0))
	{
		child_pid = fork();
		if (child_pid == -1)
		{
			printf("error");
			return (1);
		}
		if (child_pid == 0) {
			execve(argv[0], argv, NULL);
			printf("Failed to execute command\n");
			return 1;
			} else {
		wait(&status);
		i++;
		}
			}
	return (0);
}	
