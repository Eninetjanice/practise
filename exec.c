#include <stdio.h>
#include <unistd.h>

/**
 * main - execve example. allows a process to execute another program
 * loads the new call program into the current process' memory
 * in place of the "previous"
 * example is used withpout the current environment (last argument)
 *
 * Return: Always 0. nothing on success
 */
int main(void)
{
    char *argv[] = {"/bin/ls", "-l", "/usr/", NULL};

    printf("Before execve\n");
    if (execve(argv[0], argv, NULL) == -1)
    {
        perror("Error:");
    }
    printf("After execve\n");
    return (0);
}
