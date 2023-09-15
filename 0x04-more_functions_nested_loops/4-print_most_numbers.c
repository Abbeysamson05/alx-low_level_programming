#include "main.h"
/**
 * print_most_numbers - Print digit 0 to 9 without 2 and 4
 *
 * Return: Void.
 */
void print_most_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		if (c != 50 && c != 52)
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}

