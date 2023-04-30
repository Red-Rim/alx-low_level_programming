#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

/*Red-Rim*/
/**
 * positive_number - checks if a string is a positive number
 * @s: string to check
 * Return: 1 if the string is a positive number, 0 otherwise
 */
int positive_number(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}
	return (1);
}

/**
 * main - a program that adds positive numbers
 * @argc: the number of command-line arguments
 * @argv: an array containing the command-line arguments
 * Return: 0 if successful, 1 if an error occurred
 */
int main(int argc, char **argv)
{
	int i, sum;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!positive_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
