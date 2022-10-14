#include "main.h"
/**
 *cap_string - capitalise the first letter of every word of a string
 * @arr: a string to capitalise
 * Return: arr
 */

char *cap_string(char *arr)
{
	int i;
	int inc;

	i = 0;
/*work out the size of the difference in ascii value between lower and upper */
	inc = 'A' - 'a';

	while (arr[i] != '\0')
	{
/*this beast of a statement checks to see if the previous char was non-alpha*/
		if (arr[i] >= 'a' && arr[i] <= 'z' && (arr[(i - 1)] < 'a' ||
		    arr[(i - 1)] > 'z' && arr[(i - 1)] < 'A' && arr[(i - 1)] ||
			arr[(i - 1)] > 'Z'))
		{
			arr[i] = arr[i] + inc;
		}
		i = i + 1;
	}
	return (arr);
}
