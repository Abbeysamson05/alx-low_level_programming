#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lower code.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

