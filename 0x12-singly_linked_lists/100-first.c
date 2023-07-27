#include <stdio.h>

void openning(void) __attribute__ ((constructor));

/**
 * openning - prints the sentence just before the main is executed
 */

void openning(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
