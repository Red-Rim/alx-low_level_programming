#include "main.h"

/*Red-Rim*/
/**
 * flip_bits -  returns the number of bits you would need to flip
 * to get from one number to another
 * @n: first
 * @m: second
 * Return: numb of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int c = 0;

	while (xor > 0)
	{
		c += xor & 1;
		xor >>= 1;
	}

	return (c);
}
