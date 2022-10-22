#include "main.h"
/**
 * _abs - returns the absolute value of a given number
 * @abs : int to be converted to absolute
 * Return: the absolute value of abs
 */

int _abs(int abs)
{
	if (abs < 0)
	{
		return (-abs);
	}
	else
	{
		return (abs);
	}
}
