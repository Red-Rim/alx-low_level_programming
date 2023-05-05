#include "main.h"

/*Red-Rim*/
/**
 * print_binary - prints the binary representation of a number
 * @n: numb converted
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int ama = 1;

	int baka = 0;

	ama <<= 63;
	if (n == 0)
		_putchar('0');

	while (ama > 0)
	{
			if ((n & ama) == 0 && baka == 1)
				_putchar('0');

			if ((n & ama) != 0)
			{
				_putchar('1');
				baka = 1;
			}

			ama = ama >> 1;
	}
}
