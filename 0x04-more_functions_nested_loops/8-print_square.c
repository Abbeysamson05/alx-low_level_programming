#include "main.h"
/**
 * print_square - Draw a straight line
 * @size: function parameter
 * Return: Void.
 */
void print_square(int size)
{
	int c;
	int d;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0; c < size; c++)
		{
			for (d = 0; d < size; d++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
