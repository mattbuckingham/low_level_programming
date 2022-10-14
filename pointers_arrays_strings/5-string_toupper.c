#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @arr: a string
 * Return: void
 */

char *string_toupper(char *arr)
{
	int i;
	int inc;

/*work out the size of the difference in ascii value between lower and upper */
	inc = 'A' - 'a';

	while (arr[i] != '\0')
	{
		if (arr[i] > 'a' && arr[i] < 'z')
		{
			arr[i] = arr[i] + inc;
		}
		i = i + 1;
	}
}
