#include "main.h"

/**
 * print_digits - prints the digits of an integer
 * @n: the number whose digits are printed
 *
 * Return: Nothing
 */
static void print_digits(int n)
{
	int digit;

	if (n >= 10 || n <= -10)
		print_digits(n / 10);

	if (n < 0)
		digit = -(n % 10);
	else
		digit = n % 10;

	_putchar(digit + '0');
}

/**
 * print_number - prints an integer
 * @n: the integer to print
 *
 * Return: Nothing
 */
void print_number(int n)
{
	if (n < 0)
		_putchar('-');

	print_digits(n);
}
