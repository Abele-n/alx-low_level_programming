#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns sum of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: Sum of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference between two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: Difference of a and b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of the two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: Product of a and b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: Quotient of a and b.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the remainder of the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: Remainder of the division of a by b.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
