#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - prints "$ ", wait for user to enter a command, prints it on '\n'
 * 
 * Return: 0
 */
int main(void)
{
	ssize_t n_read = 0;
	char *lineptr = NULL;
	size_t len = 0;

	write(1, "$ ", 2); /*prompt*/

	n_read = getline(&lineptr, &len, stdin); /*get user input*/

	printf("%s\n", lineptr);

	return (0);
}
