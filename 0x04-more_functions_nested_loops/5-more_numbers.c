#include "main.h"
/**
 * more_numbers - Print digit 0 to 14
 *
 * Return: Void.
 */
void more_numbers(void)
{
	int c, d;

	for (d = 0; d <= 9; d++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
			{
				_putchar((c / 10) + '0');
			}
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
}
