#include "main.h"
#include <string.h>

/**
 * main - check the code
 * puts2 - Resets variable to 98 .
 * @str: parameter
 * Return: Void.
 */
void puts2(char *str)
{
	int i = 0;

	for (i = 0; i < (strlen(str)); i++)
	{
		_putchar(str[i]);
		_putchar('\n');
	}
}
