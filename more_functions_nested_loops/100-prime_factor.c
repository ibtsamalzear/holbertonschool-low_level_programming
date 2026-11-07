#include <stdio.h>

/**
 * main - finds and prints the largest prime factor
 *
 * Return: 0 on success
 */
int main(void)
{
	unsigned long number = 612852475143UL;
	unsigned long factor;
	unsigned long largest;

	largest = 0;

	for (factor = 2; factor <= number / factor; factor++)
	{
		while (number % factor == 0)
		{
			largest = factor;
			number /= factor;
		}
	}

	if (number > 1)
		largest = number;

	printf("%lu\n", largest);

	return (0);
}
