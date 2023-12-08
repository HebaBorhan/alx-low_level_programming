#!/bin/bash
#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t maxpid;

	maxpid = cat /proc/sys/kernel/pid_max;

	printf("maxpid is %u\n", maxpid);

	return 0;
}
