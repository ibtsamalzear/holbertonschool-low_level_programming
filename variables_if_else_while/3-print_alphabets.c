#include <stdio.h>

/**
 * main - prints the alphabet in lowercase and uppercase
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

	ch = 'A';

	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');

	return (0);
}
