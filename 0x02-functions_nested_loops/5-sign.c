#include "main.h"

/**
 * print_sign - check for numbers greater than 1, equal to 0 and less than 1.
 * *@n: Return
 * Return: Always 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
