#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @r: string to encode
 *
 * Return: adress of r
 */
char *rot13(char *r)
{
	int i, j;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; *(r + i); i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[j] == *(r + i))
			{
				*(r + i) = b[j];
				break;
			}
		}
	}
	return (r);
}
