#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: the string to print
 *
 * Return: Nothing
 */
void puts_half(char *str)
{
	int length;
	int i;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	for (i = (length + 1) / 2; i < length; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
