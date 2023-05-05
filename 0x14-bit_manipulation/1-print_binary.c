#include "main.h"

/*Red-Rim*/
/**
* print_binary -  prints the binary representation of a number
* @n : the num converted
*/
void print_binary(unsigned long int n)
{
	unsigned long int ama = n;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while ((ama >> 1) != 0)
	{
		ama <<= 1;
	}
	while (ama != 0)
	{
		if (n & ama)
			_putchar('1');
		else
			_putchar('0');
			ama >>= 1;
	}
}
