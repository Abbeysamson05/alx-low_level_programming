#include "main.h"
#include <string.h>

/**
 * puts2 - Resets variable to 98 .
 * @str: parameter
 * Return: Void.
 */
void puts2(char *str)
{
	size_t i = 0;

	for (i = 0; i < (strlen(str)); i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
