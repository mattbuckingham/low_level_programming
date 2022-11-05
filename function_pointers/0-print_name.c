#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_name - function that prints a name.
 * @name: name to be printed
 * @f: pointer to print function
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
