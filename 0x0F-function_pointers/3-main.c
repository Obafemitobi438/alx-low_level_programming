#include "3-calc.h"

#include <stdlib.h>

#include <stdio.h>

/**
 * main - Prints result of operation
 * @argc: Number of arguments on command line
 * @argv: character arrays
 * Return: the outcome of the arguments
 **/

int main(int argc, char *argv[])

{
	int (*oprt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");

		exit(98);

	}

	oprt = get_op_func(argv[2]);

	if (!oprt)
	{

		printf("Error\n");

		exit(99);

	}

	printf("%d\n", oprt(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
