#include <main.h>

void positive_or_negative(int i)
{
	if(i > 0)
		printf("%d is pos\n",i);
	else if(i < 0)
		printf("%d is neg\n",i);
	else
		printf("%d is zero\n",i);
}
