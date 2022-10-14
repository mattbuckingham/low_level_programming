#include "main.h"
/**
 *cap_string - capitalise the first letter of every word of a string
 * @arr: a string to capitalise
 * Return: arr
 */

char *cap_string(char *arr)
{
	int i, k;
	int inc;
	char sep[] = " \t\n,;.!?\"(){}";

	i = 0;
/*work out the size of the difference in ascii value between lower and upper */
	inc = 'A' - 'a';

	while (arr[i] != '\0')
	{
		if (arr[i] >= 'a' && arr[i] <= 'z')
		{
			if (i == 0)
			{
				arr[i] = arr[i] + inc;
			}
			else
			{
				k = 0;
				/* check to see isf previous char was a seperator*/
				while (sep[k] != '\0')
				{
					if (sep[k] == arr[(i - 1)])
						arr[i] = arr[i] + inc;
					k = k + 1;
				}
			}

		}
		i = i + 1;
	}
	return (arr);
}
