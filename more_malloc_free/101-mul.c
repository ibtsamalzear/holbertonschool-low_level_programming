#include <stdio.h>
#include <stdlib.h>

/**
 * is_valid_number - checks if a string contains only digits
 * @str: string to check
 *
 * Return: 1 if valid, otherwise 0
 */
int is_valid_number(char *str)
{
    int i;

    if (str[0] == '\0')
        return (0);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] < '0' || str[i] > '9')
            return (0);
    }

    return (1);
}

/**
 * string_length - calculates the length of a string
 * @str: string to measure
 *
 * Return: string length
 */
unsigned int string_length(char *str)
{
    unsigned int len;

    len = 0;
    while (str[len] != '\0')
        len++;

    return (len);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
    char *num1, *num2;
    int *result;
    unsigned int len1, len2, i, j, start;
    int carry, sum;

    if (argc != 3)
    {
        printf("Error\n");
        return (98);
    }

    num1 = argv[1];
    num2 = argv[2];

    if (!is_valid_number(num1) || !is_valid_number(num2))
    {
        printf("Error\n");
        return (98);
    }

    len1 = string_length(num1);
    len2 = string_length(num2);

    result = malloc(sizeof(int) * (len1 + len2));
    if (result == NULL)
        return (98);

    for (i = 0; i < len1 + len2; i++)
        result[i] = 0;

    for (i = len1; i > 0; i--)
    {
        carry = 0;

        for (j = len2; j > 0; j--)
        {
            sum = (num1[i - 1] - '0') * (num2[j - 1] - '0');
            sum += result[i + j - 1] + carry;

            result[i + j - 1] = sum % 10;
            carry = sum / 10;
        }

        result[i - 1] += carry;
    }

    start = 0;
    while (start < len1 + len2 - 1 && result[start] == 0)
        start++;

    for (i = start; i < len1 + len2; i++)
        printf("%d", result[i]);

    printf("\n");

    free(result);
    return (0);
}
