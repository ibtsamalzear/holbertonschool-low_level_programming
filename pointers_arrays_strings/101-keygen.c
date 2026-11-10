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
	int p;
	int sum;
	int limit;

	srand(time(NULL));
	sum = 0;

	while (sum < 2646)
	{
		limit = 2740 - sum;
		p = (rand() % (limit - 32 + 1)) + 32;
		sum += p;
		putchar(p);
	}

	putchar(2772 - sum);
	putchar('\n');

	return (0);
}
