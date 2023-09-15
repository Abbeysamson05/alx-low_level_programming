#include "main.h"
/**
 * print_triangle - Draw a triangle line
 * @size: function parameter
 * Return: Void.
 */
void print_triangle(int size)
{
	int c;
	int d;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 1; c <= size; c++)
		{
			for (d = 0; d < size; d++)
			{
				if (((c + d) != 10))
				{
					if ((c + d) >= size)
					{
						_putchar('#');
					}
					else
					{
						_putchar(' ');
					}
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}
