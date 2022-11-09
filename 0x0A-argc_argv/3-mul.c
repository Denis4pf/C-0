#include <stdio.h>
#include <stdlib.h>

/**
 * main - arguments to main
 * @argc: first arg is a count
 * @argv: second arg is a pointer to char
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int multiple = 0;

	if (argc - 1 != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		multiple = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", multiple);
	}

	return (0);
}
