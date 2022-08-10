#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * main - exercise: fork + wait + execve
 * program that executes the command ls -l /tmp in 5 different child processes
 * Each child is created by same process (the father)
 * Wait for a child to exit before creating a new child.
 *
 * Return: Always 0
 */
int main(void)
{
	pid_t my_pid;
	pid_t child_pid = 1;
	int i = 0;
	int status;
	char *argv[] = {"bin/ls", "-l", "tmp/", NULL};

	my_pid = getpid();
	while (i <= 4 && (child_pid != 0))
	{
		child_pid = fork();
		if (child_pid == -1) /*check for error*/
		{
			printf("error");
			return (1);
		}
		wait(&status);
		i++;
	}
	if (child_pid == 0)
	{
		printf("wait for me, wait for me\n\n");
		printf("C's ID: %u\n\n F's ID: %u\n\n", getpid(), getppid());
		printf("I am waiting\n\n");

	}
	else
	{
		printf("%u My child ID is: %u\n", my_pid, child_pid);
	}
	if (execve(argv[0], argv, NULL) == -1) /*check for error*/

	return (0);
}
