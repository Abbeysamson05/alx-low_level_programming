#include "main.h"
#include <string.h>

/**
 * main - check the code
 * rev_string - Resets variable to 98 .
 * @s: parameter
 * Return: Void.
 */
void rev_string(char *s)
{
	int length = strlen(s);
	int start = 0;
	int end = length - 1;

	while (start < end)
	{
		chat temp = s[start];

		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
