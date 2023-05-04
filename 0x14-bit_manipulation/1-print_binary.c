#include "main.h"

/*Red-Rim*/
/**
 * print_binary - prints the binary representation of a number
 * @n: numb converted
 */
void print_binary(unsigned long int n)
{
	unsigned long int ama = 1;

	int i;

	for (i = 0; i < 63; i++)
	{
		if ((n & (ama << i)) || (i == 62))
		{
			_putchar('1');
			ama = 1;
			continue;
		}
		_putchar('0');
	}
}
