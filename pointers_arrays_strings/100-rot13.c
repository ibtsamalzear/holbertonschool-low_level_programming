#include "main.h"

/**
 * rot13 - encodes a string using ROT13
 * @str: string to encode
 *
 * Return: pointer to the encoded string
 */
char *rot13(char *str)
{
	int i = 0;
	int j;
	char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char encoded[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[i] != '\0')
	{
		j = 0;
		while (j < 52)
		{
			if (str[i] == letters[j])
			{
				str[i] = encoded[j];
				break;
			}
			j++;
		}
		i++;
	}

	return (str);
}
