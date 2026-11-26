#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - selects the correct function for an operator
 * @s: the operator
 *
 * Return: a pointer to the matching function, or NULL
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL && strcmp(s, ops[i].op) != 0)
		i++;

	if (ops[i].op == NULL)
		return (NULL);

	return (ops[i].f);
}
