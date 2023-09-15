#include "main.h"
/**
 * print_diagonal - Draw a diagonal line
 * @n: function parameter
 * Return: Void.
 */
void print_diagonal(int n)
{
	int c;
	int d;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0; c < n; c++)
		{
			for (d = 0; d <= c; d++)
			{
				if (d == c)
				{
					_putchar('\\');
					_putchar('\n');
				}
				else
				{
					_putchar(' ');
				}
			}
		}
	}
}
