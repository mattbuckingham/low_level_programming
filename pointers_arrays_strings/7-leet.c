#include "main.h"
/**
 *leet -function that encodes a string into 1337
 * @str: a string
 * Return: void
 */

char *leet(char *str)
{
	char upLet[5], lowLet[5], num[5];
	int i, k;

	upLet = "AEOTL";
	lowLet = "aeotl";
	num = "43071";

	i = 0;
	k = 0;

	while (str[i] != '\0')
	{
		while (lowLet[k] != '\0')
		{
			if (str[i] == lowLet[k] || str[i] == upLet[k])
			{
				str[i] = num[k];
				k = k + 1;
			}
		}
		i = i + 1;
	}
	return (str);
}
