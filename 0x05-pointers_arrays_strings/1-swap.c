#include "main.f"
/**
 * swap_int - function that swaps the values of two integers
 * @a: first int
 * @b: second int
 * Return : always 0
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;

	return (0);
}
