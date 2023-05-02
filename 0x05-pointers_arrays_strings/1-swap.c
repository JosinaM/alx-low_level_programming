#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to the first integer
 * @b: pointer of the second integer
 * return: void
 */
void swap_int(int *a, int *b)
{
	int temp_a = *a;
	int temp_b = *b;
	*a = temp_b;
	*b = temp_a;
}
