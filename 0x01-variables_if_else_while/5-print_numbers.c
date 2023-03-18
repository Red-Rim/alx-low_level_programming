#include <stdio.h>
/**
 * main - main function
 * Description: prints all single digit numbers of base 10 starting from 0
 * Return: always 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);

	printf("\n");

	return (0);
}
