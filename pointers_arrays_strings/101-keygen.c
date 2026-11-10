#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a random valid password
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	int sum;
	int remaining;
	int lower;
	int upper;
	int p;

	srand(time(NULL));
	sum = 0;

	for (i = 0; i < 21; i++)
	{
		p = 'y' + rand() % 2;
		putchar(p);
		sum += p;
	}

	remaining = 2772 - sum;
	lower = remaining - 122;
	upper = remaining - 97;

	if (lower < 97)
		lower = 97;
	if (upper > 122)
		upper = 122;

	p = lower + rand() % (upper - lower + 1);
	putchar(p);
	putchar(remaining - p);
	putchar('\n');

	return (0);
}
