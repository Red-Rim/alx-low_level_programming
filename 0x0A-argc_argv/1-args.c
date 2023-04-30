#include <stdio.h>
#include "main.h"

/*Red-Rim*/
/**
 * main - Write a program that prints the number of arguments passed into it
 * @argc: number of command-line arguments
 * @argv: array of comman-line argument string
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void)argv; /*cast argv to void to indicate it is unused*/

	printf("%d\n", argc - 1);
	return (0);
}
