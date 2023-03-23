#include <main.h>
/**
 * main - test function if it is pos or neg or null
 * return: 0 always
 */
int positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is pos\n", i);
	else if (i < 0)
		printf("%d is neg\n", i);
	else
		printf("%d is zero\n", i);
}
