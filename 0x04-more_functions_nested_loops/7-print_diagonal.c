#include "main.h"
/**
 * print_line - Draw a diagonal line
 * @n: function parameter
 * Return: Void.
 */
void print_diagonal(int n)
{
	int c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0; c < n; c++)
		{
			_putchar('\\');
			_putchar('\n');
		}
		_putchar('\n');
	}
}
