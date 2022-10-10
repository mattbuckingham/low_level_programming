#include "main.h"
/**
 * swap_int - swaps the value of two vars
 * @a: a pointer to an int
 * @b: a pointer to an int
 */

void swap_int(int *a, int *b)
{
	int hold;

	hold = *a;
	*a = *b;
	*b = hold;
}
