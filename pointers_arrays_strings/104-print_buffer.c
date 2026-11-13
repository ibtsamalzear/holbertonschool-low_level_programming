#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_hex - prints ten bytes in hexadecimal
 * @b: buffer
 * @start: starting position
 * @size: buffer size
 */
static void print_hex(char *b, int start, int size)
{
	int i;

	for (i = start; i < start + 10; i++)
	{
		if (i < size)
			printf("%02x", (unsigned char)b[i]);
		else
			printf("  ");
		if ((i - start) % 2 == 1)
			printf(" ");
	}
}

/**
 * print_ascii - prints ten bytes as characters
 * @b: buffer
 * @start: starting position
 * @size: buffer size
 */
static void print_ascii(char *b, int start, int size)
{
	int i;

	for (i = start; i < start + 10 && i < size; i++)
	{
		if (isprint((unsigned char)b[i]))
			putchar(b[i]);
		else
			putchar('.');
	}
}

/**
 * print_buffer - prints the content of a buffer
 * @b: buffer to print
 * @size: number of bytes
 */
void print_buffer(char *b, int size)
{
	int i;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		print_hex(b, i, size);
		print_ascii(b, i, size);
		putchar('\n');
	}
}
