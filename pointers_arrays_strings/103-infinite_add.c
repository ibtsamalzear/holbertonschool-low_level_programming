#include "main.h"

/**
 * infinite_add - adds two positive numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer to store the result
 * @size_r: size of the buffer
 *
 * Return: pointer to result, or 0 if it cannot fit
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, carry, sum, temp;

	i = 0;
	while (n1[i] != '\0')
		i++;
	j = 0;
	while (n2[j] != '\0')
		j++;
	i--;
	j--;
	k = 0;
	carry = 0;
	while (i >= 0 || j >= 0 || carry)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i--] - '0';
		if (j >= 0)
			sum += n2[j--] - '0';
		if (k >= size_r - 1)
			return (0);
		r[k++] = (sum % 10) + '0';
		carry = sum / 10;
	}
	r[k] = '\0';
	for (i = 0, j = k - 1; i < j; i++, j--)
	{
		temp = r[i];
		r[i] = r[j];
		r[j] = temp;
	}
	return (r);
}
