#include "main.h"
#include <string.h>

/**
 * main - check the code
 * puts_half - Resets variable to 98 .
 * @str: parameter
 * Return: Void.
 */
void puts_half(char *str)
{
	size_t i;
	int j = strlen(str) / 2;

	for (i = j; i < strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
