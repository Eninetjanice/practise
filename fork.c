#include <stdio.h>
#include <unistd.h>

/**
 * main - fork example, create a child process
 * SYNOPSIS is #include <sys/types.h>, #include <unistd.h>, pid_t fork(void);
 * On success, the PID of the child process is returned in the parent, and
 * 0  is returned in the child.  On failure, -1 is returned in the parent,
 * no child process is created, and errno is set appropriately
 * 
 * Return: Always 0.
 */
int main(void)
{
	pid_t my_pid;
	pid_t child_pid;

	child_pid = fork();
	if (child_pid == -1)
	{
		perror("Error:");
		return (1);
	}
	my_pid = getpid();
	printf("My pid is %u\n", my_pid);
	if (child_pid == 0)
	{
		printf("(%u) Nooooooooo!\n", my_pid);
	}
	else
	{
		printf("(%u) %u, I am your father\n", my_pid, child_pid);
	}
	return (0);
}
