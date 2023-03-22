#include "main.h"
/**
 * main - main function
 * print_alphabet - prints the alphabet, in lowercase
 * return: 0 always
 */
void print_alphabet(void)
{
	int i;
	
	for (i = 97; i <= 122; i++)
	{
		-putchar(i);
	}
	_putchar('\n');

	return (0);
}
