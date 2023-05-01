#include "lists.h"
#include <stdio.h>

/*Red-Rim*/
/**
 * print - a function that prints before the main is executed
 */
void __attribute__ ((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
