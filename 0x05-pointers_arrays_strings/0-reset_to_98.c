#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * reset_to_98 - Resets variable to 98 .
 * @n: parameter
 * Return: Void.
 */
void reset_to_98(int *n)
{
	*n = 98;
	printf("%d\n", n);
}
