#include "main.h"
/**
 * print_number - Draw a straight line
 * @n: function parameter
 * Return: Void.
 */
void print_number(int n)
{
	int digit;

	while (n > 0)
	{
		digit = n % 10;
		_putchar('0' + digit);
		n = n / 10;
	}
	_putchar('\n');
}
