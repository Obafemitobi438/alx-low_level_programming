#include "main.h"
/**
*print_alphabeth - print alphabeth in lower case
*followed by a new line
*Return: Always 0
**/
void print_alphabeth(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
