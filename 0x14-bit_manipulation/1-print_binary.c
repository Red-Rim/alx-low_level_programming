#include "main.h"

/*Red-Rim*/
/**
 * print_binary - prints the binary representation of a number
 * @n: numb converted
 */
void print_binary(unsigned long int n)
{
	unsigned long int ama = 1;

	ama <<= ((sizeof(unsigned long int) * 8) - 1);

	while (ama > 0)
	{
		if (n & ama)
			_putchar('1');
		else
			_putchar('0');
		ama >>= 1;
	}
}
