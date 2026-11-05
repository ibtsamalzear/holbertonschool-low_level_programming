#include <stdio.h>

/**
 * main - prints the sum of even Fibonacci numbers
 *        not exceeding 4000000
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long first = 1, second = 2, next;
	unsigned long sum = 0;

	while (first <= 4000000)
	{
		if (first % 2 == 0)
			sum += first;

		next = first + second;
		first = second;
		second = next;
	}

	printf("%lu\n", sum);

	return (0);
}
