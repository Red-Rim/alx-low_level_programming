#include "main.h"

/*Red-Rim*/
/**
 * print_binary - prints the binary representation of a numb
 * @n: num
 */
void print_binary(unsigned long int n)
{
	int i = 63, ama = 0;

	unsigned long int baka;

	while (i >= 0)
	{
		baka = n >> i;

		if (baka & 1)
		{
			_putchar('1');
			ama++;
		} else if (ama)
			_putchar('0');
		i--;
	}
	if (ama == 0)
		_putchar('0');
}
