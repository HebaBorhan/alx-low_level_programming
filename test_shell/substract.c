#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int a = 3;
	int b = 5;
	int sub = b - a;
	pid_t pid;
	pid_t ppid;

	pid = getpid();
	ppid = getppid();

	printf("sum is %d\n", sub);
	printf("pid is %u\n", pid);
	printf("ppid is %u\n", ppid);

	return 0;
}
