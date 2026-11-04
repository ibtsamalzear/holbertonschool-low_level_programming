#include <stdio.h>

/**
 * main - prints all possible combinations of two different digits
 *
 * Return: Always 0
 */
int main(void)
{
	int first;
	int second;

	for (first = 0; first <= 9; first++)
	{
		for (second = first + 1; second <= 9; second++)
		{
			putchar(first + '0');
			putchar(second + '0');

			if (first != 8 || second != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
