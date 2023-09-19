#include "main.h"
#include <stdio.h>

/**
 * _puts - Resets variable to 98 .
 * @str: parameter
 * Return: Void.
 */
void _puts(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		_putchar(str[length]);
		length++;
	}
	_putchar('\n');
}
