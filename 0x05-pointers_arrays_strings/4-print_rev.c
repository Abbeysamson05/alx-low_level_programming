#include "main.h"
#include <string.h>

/**
 * main - check the code
 * print_rev - Resets variable to 98 .
 * @s: parameter
 * Return: Void
 */
void print_rev(char *s)
{
	int i;

	for (i = (strlen(s) - 1); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
