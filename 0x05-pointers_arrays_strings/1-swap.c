/**
 * swap_int - Swap the values of two variables
 *
 * @a: parameter
 * @b: parameter
 * Return: Void.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
