#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int a = 3;
	int b = 5;
	int sum = a + b;
	pid_t pid;
	pid_t ppid;

	pid = getpid();
	ppid = getppid();

	printf("sum is %d\n", sum);
	printf("pid is %u\n", pid);
	printf("ppid is %u\n", ppid);

	return 0;
}
