#include "main.h"
/**
 * _islower- function to determine if a char is lowercase or not
 *Return: 1 if c is lowercase, 0 otherwise
 * @c: a letter that you want to check to see is lowercase or not
 */

int _islower(int c)
{
	int result;

	result = 0;

	if (c >= 97)
	{
		if (c <= 122)
		{
			result = 1;
		}
	}
	return (result);
}
