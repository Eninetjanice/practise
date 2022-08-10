#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints all the arguments, without using ac.
 * @ac: number of items in av
 * @av: a NULL terminated array of strings
 * Return: 0
 */
int main(int ac, char **av)
{
	int i = 0;

	while (av[i])
	{
		printf("Argument %d is: %s\n", i, av[i]);
		i++;
	}
	return (0);
}
