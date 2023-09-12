#include "main.h"
/**
 * _abs - Print absolute value of a number
 * @a: - function parameter
 * Return: Always 0.
 */
int _abs(int a)
{
	int b = a * -1;

	if (a >= 0)
	{
		return (a);
	}
	else
	{
		return (b);
	}
	return (0);
}
