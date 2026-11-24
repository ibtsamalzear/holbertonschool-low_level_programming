#include "main.h"

/**
 * _is_prime_number_helper - Checks possible divisors of a number.
 * @n: The number to check.
 * @divisor: The current possible divisor.
 * Return: 1 if n is prime, otherwise 0.
 */
int _is_prime_number_helper(int n, int divisor)
{
	if (divisor > n / divisor)
	{
		return (1);
	}

	if (n % divisor == 0)
	{
		return (0);
	}

	return (_is_prime_number_helper(n, divisor + 1));
}

/**
 * is_prime_number - Checks if an integer is a prime number.
 * @n: The number to check.
 * Return: 1 if n is prime, otherwise 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (_is_prime_number_helper(n, 2));
}
