#include "main.h"
/**
 * print_square - Draw a straight line
 * @size: function parameter
 * Return: Void.
 */
void print_square(int size)
{
	int c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0; c < size; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
