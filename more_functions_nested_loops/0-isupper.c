#include "main.h"
/**
 * _isupper - checks to see if a char is uppercase
 * @c: a char to check
 * Return: a 1 if upper or a 0 if not
 */
int _isupper(int c)
{
	if (c < '[' && c > '@')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
