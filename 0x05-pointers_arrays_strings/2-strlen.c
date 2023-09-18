#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * main - check the code
 * _strlen - get string length.
 *
 * @s: parameter
 * Return: Void.
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '0');
	{
		length++;
	}
	return length;
}
