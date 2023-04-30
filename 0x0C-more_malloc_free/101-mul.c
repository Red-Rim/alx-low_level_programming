#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/*Red-Rim*/
/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error: Usage: %s num1 num2\n", argv[0]);
		return (98);
	}

	char *endptr1, *endptr2;
	long num1 = strtol(argv[1], &endptr1, 10);
	long num2 = strtol(argv[2], &endptr2, 10);

	if (*endptr1 != '\0' || *endptr2 != '\0')
	{
		printf("Error: num1 and num2 should only be composed of digits.\n");
		return (98);
	}

	long result = num1 * num2;

	printf("%ld\n", result);

	return (0);
}

