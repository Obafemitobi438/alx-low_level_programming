#include "3-calc.h"

#include <stdlib.h>

#include <stdio.h>

/**
 * op_add - Sum of a and b
 * @a: The given integer
 * @b: The second given integer
 * Return: the outcome of operation
 **/

int op_add(int a, int b)

{
	return (a + b);
}

/**
 * op_sub - difference of a and b
 * @a: The first given integer
 * @b: The second given integer
 * Return: The outcome of the operation
 **/

int op_sub(int a, int b)

{
	return (a - b);
}

/**
 * op_mul - The product of a and b
 * @a: The first given integer
 * @b: The second given integer
 * Return: the result of the operation
 **/

int op_mul(int a, int b)

{
	return (a * b);
}

/**
 * op_div - The division of a and b
 * @a: The first given integer
 * @b: The second given integer
 * Return: The result of the operation
 **/

int op_div(int a, int b)

{
	if (b == 0)
	{
		printf("Error\n");

		exit(100);
	}

	return (a / b);

}

/**
 * op_mod - The remainder of the division of a and b
 * @a: The first given integer
 * @b: The second given integer
 * Return: The result of the operation
 **/

int op_mod(int a, int b)

{
	if (b == 0)
	{
		printf("Error\n");

		exit(100);
	}

	return (a % b);

}
