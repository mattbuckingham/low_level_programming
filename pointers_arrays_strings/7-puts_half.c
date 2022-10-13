#include "main.h"
/**
 * puts_half - prints every second char of a string
 * @str: a string
 */
void puts_half(char *str)
{
	int i;
	int len;

	len = 0;
	i = 0;
	/* length of string, stored in len */
	while (str[len] != '\0')
	{
		len = len + 1;
	}
	/*jump back off the null char
	  len = len - 1;*/

	/*set i to be the start of where we need to print from*/

	i = (len - 1) / 2;

	/*print every other char */
	while (i <= len)
	{
		_putchar(str[i]);
		i = i + 1;
	}
	/*terminate with a newline char*/
	_putchar('\n');
}
