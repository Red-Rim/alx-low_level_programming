#include <stdio.h>
#include "main.h"

/*Red-Rim*/
/**
 * main -  a program that prints its name, followed by a new line
 * @argc: number of command-line arguments
 * @argv: array of command-line argument strings
 * Return: always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
