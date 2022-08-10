#include <stdio.h>
#include <unistd.h>

/**
 * main - prints PPID
 *
 * Return: Always 0.
 */
int main(void)
{
	pid_t ppid;

	ppid = getppid();
	printf("PPID is %u\n", ppid);
	return (0);
}
