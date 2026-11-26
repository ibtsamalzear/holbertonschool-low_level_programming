#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs simple arithmetic operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 98 if arguments are incorrect,
 * 99 if operator is invalid,
 * 100 if division by zero,
 * 0 on success
 */
int main(int argc, char *argv[])
{
	int (*operation)(int, int);
	int num1;
	int num2;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	operation = get_op_func(argv[2]);
	if (operation == NULL)
	{
		printf("Error\n");
		return (99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	printf("%d\n", operation(num1, num2));
	return (0);
}
