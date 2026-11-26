#include "function_pointers.h"

/**
 * print_name - prints a name using a function
 * @name: the name to print
 * @f: pointer to the function
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
