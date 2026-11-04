#include <stdio.h>

/**
 * main - prints the lowercase alphabet
 *
 * Return: Always 0
 */
int main(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');

	return (0);
}
