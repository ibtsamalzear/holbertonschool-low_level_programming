#include "main.h"

/**
 * _sqrt_recursion_helper - Searches for the natural square root.
 * @n: The number to find the square root of.
 * @low: The lowest possible square root.
 * @high: The highest possible square root.
 * Return: The natural square root, or -1 if none exists.
 */
int _sqrt_recursion_helper(int n, int low, int high)
{
	int mid;

	if (low > high)
	{
		return (-1);
	}

	mid = low + (high - low) / 2;

	if (mid > n / mid)
	{
		return (_sqrt_recursion_helper(n, low, mid - 1));
	}

	if (n % mid == 0 && mid == n / mid)
	{
		return (mid);
	}

	return (_sqrt_recursion_helper(n, mid + 1, high));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 * Return: The natural square root, or -1 if none exists.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (0);
	}

	return (_sqrt_recursion_helper(n, 1, n));
}
