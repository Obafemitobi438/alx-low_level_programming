#include "main.h"

/**
* -isalpha - checks for char alphabet
* @c: the char to be checked
* Return: 1 if char is the letter lower or upper, 0 otherwise
**/

int -isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && <= 'Z'))
		return (1);
	else
		return (0);
}
