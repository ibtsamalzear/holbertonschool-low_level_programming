#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long first = 1, second = 2, next;
	int count;

	for (count = 0; count < 50; count++)
	{
		printf("%lu", first);

		if (count < 49)
			printf(", ");

		next = first + second;
		first = second;
		second = next;
	}

	printf("\n");

	return (0);
}
