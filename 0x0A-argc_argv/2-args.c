#include "main.h"
#include <stdio.h>

/*Red-Rim*/
/**
 * main - Write a program that prints all arguments it receives
 * @argc: number of command-line arguments
 * @argv: array of command-line argument strings
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
