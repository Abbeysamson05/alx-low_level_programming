#include <stdio.h>
#include "main.h"
/**
 * main  - Checks for prime factors and print highest of the factors
 * Return: Void.
 */
int main(void)
{
	long j = 612852475143;
	int largest;

	while (j > 0)
	{
		if ((j % 2) == 0)
		{
			j = j / 2;
			largest = 2;
		}
		else if ((j % 3) == 0)
		{
			j = j / 3;
			largest = 3;
		}
		else if ((j % 17) == 0)
		{
			j = j / 17;
			largest = 17;
		}
		else if ((j % 19) == 0)
		{
			j = j / 19;
			largest = 19;
		}
		else if ((j % 31) == 0)
		{
			j = j / 31;
			largest = 31;
		}
	}
	printf("%d", largest);
	return (largest);
}
