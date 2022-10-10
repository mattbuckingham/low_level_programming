 #include "main.h"
/**
 * rev_string - reverses a string
 * @s: a string to be reversed
 */
void rev_string(char *s)
{
	int i;
	int k;
	int tmp;
	int stop;

	i = 0;
	k = 0;

	/** this loop finds the length of the string, stored in i*/
	while (s[i] != '\0')
	{
		i = i + 1;
	}
	i = i - 1;
	stop = (i / 2);
		/* reverse the string */
	while (i > stop)
	{
		tmp  = s[i];
		s[i] = s[k];
		s[k] = tmp;

		i = i - 1;
		k = k + 1;
	}
}
