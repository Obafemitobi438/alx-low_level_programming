#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: number of command line arguments
 * @argv: array that cotains the program command line arguments
 * Return: 0 for success
 **/

int main(int argc, char *argv[])

{
	int i;

	for (i = 0; i < argc; i++)

		printf("%s\n", argv[i]);
	return (0);
}
