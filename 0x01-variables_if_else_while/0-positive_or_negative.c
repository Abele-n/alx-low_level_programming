*Full Stack Software Engineering studies** at **ALX School**. It aims to learn about arithmetic operators, relational operators, boolean operators, comments, declaring variables and loops in **C language**.

* C files are written according to the C90 standard

0-positive_or_negative.c


#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determines if a number is positive, negative or zero.
 * Return: Always 0 (Success)
 */

int main(void)

{
	int n;

	srand(time(0));
 	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		 printf("%d is positive\n", n);
        }
        else if (n == 0)
        {
                printf("%d is zero\n", n);
        }
        else
        {

                printf("%d is negative\n", n)
        }

        return (0);
}
