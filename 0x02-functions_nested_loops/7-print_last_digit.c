#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @a: Function parameter
 * Return: Last digit
 */
int print_last_digit(int a)
{
	int last_digit = a % 10;
	int b = last_digit * -1;

	if (last_digit >= 0)
	{
		return (last_digit);
	}
	else
	{
		return (b);
	}
}
