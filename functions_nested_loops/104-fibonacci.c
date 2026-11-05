#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long a_hi = 0, a_lo = 1;
	unsigned long b_hi = 0, b_lo = 2;
	unsigned long next_hi, next_lo;
	unsigned long carry;
	int count;

	for (count = 0; count < 98; count++)
	{
		if (a_hi == 0)
			printf("%lu", a_lo);
		else
			printf("%lu%09lu", a_hi, a_lo);

		if (count < 97)
			printf(", ");

		next_lo = a_lo + b_lo;
		carry = 0;

		if (next_lo >= 1000000000)
		{
			next_lo -= 1000000000;
			carry = 1;
		}

		next_hi = a_hi + b_hi + carry;

		a_hi = b_hi;
		a_lo = b_lo;
		b_hi = next_hi;
		b_lo = next_lo;
	}

	printf("\n");

	return (0);
}
