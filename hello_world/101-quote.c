#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora ",
	     sizeof("and that piece of art is useful\" - Dora ") - 1);
	write(2, "Korpar, 2015-10-19\n",
	     sizeof("Korpar, 2015-10-19\n") - 1);
	return (1);
}
