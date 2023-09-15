#include "main.h"
/**
 * print_diagonal - Draw a diagonal line
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
			if (c != (n - 1))
			{
				_putchar(' ');
			}
			else
			{
				_putchar('\\');
			}
		}
		_putchar('\n');
	}
}
