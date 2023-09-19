#include "main.h"
#include <stdio.h>

/**
 * print_array - Resets variable to 98 .
 * @n: parameter
 * @a: parameter
 * Return: Void.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	_putchar('\n');
}
