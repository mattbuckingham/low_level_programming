#include "main.h"
/**
 * _isalpha - function to check if char is alphabetic
 * @c: char to be checked
 * Return: 1 if char is alphabetic, 0 otherwise
 */

int _isalpha(int c)
{
	int result;

	result = 0;
	if (c >= 66)
	{
		if (c <= 90)
		{
			result = 1;
		}
	}

	if (c >= 97)
	{
		if (c <= 122)
		{
			result = 1;
		}
	}

	return (result);
}
